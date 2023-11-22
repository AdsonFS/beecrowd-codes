#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 25
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};
bool vis2[10][10];
int N, M;

struct mat {
	char m[10][10];
	bool operator < (mat a) const {
		rep(i, 0, N)
			rep(j, 0, M)
				if(m[i][j] != a.m[i][j]) return m[i][j] < a.m[i][j];
		return false;
	}
};

typedef pair<mat, int> pmi;
mat aux;

bool ans(mat u) {
	set<char> list;
	rep(i, 0, N)
		rep(j, 0, M)
			list.insert(u.m[i][j]);
	return list.size() == 1 ? 1 : 0;
}

bool dentro(int i, int j) {
	return (i >= 0 && i < N && j >= 0 && j < M);
}

void dfs(int y, int x, char cor, char cor_ini) {
	vis2[y][x] = true;
	aux.m[y][x] = cor;
	rep(k, 0, 4) {
		int yy = y + dy[k];
		int xx = x + dx[k];
		if(!dentro(yy, xx)) continue;
		if(!vis2[yy][xx] && (aux.m[yy][xx] == cor || aux.m[yy][xx] == cor_ini))
			dfs(yy, xx, cor, cor_ini);
	}
}

int solve() {
	queue<pmi> q;
	map<mat, int> vis;
	vis[aux] = true;
	q.push(mk(aux, 0));
	while(!q.empty()) {
		mat u = q.front().F;
		int d = q.front().S;
		if(ans(u)) return d;
		REP(i, 0, 10) {
	   	   	memset(vis2, 0, sizeof(vis2));
			aux = u;
			dfs(0, 0, i+'0', u.m[0][0]);
			if(!vis[aux]) {
				q.push(mk(aux, d+1));
				vis[aux] = true;
			}
		}
		q.pop();
	}
	return -1;
}

int main(int argc, char** argv) {
	scanf("%d%d", &N, &M);
	rep(i, 0, N) scanf("%s", aux.m[i]);
	printf("%d\n", solve());
	return 0;
}
