#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 510
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};
char vet[MAX][MAX];
bool vis[MAX][MAX];
int best, yf, xf;
int n, m, y, x;

bool ver(int i, int j) {
	return (i >= 1 && i <= n && j >= 1 && j <= m);
}

void dfs(int i, int j, int c) {
	if(c > best) {
		best = c;
		yf = i;
		xf = j;
	}
	vis[i][j] = true;
	rep(k, 0, 4) {
		int yy = i + dy[k];
		int xx = j + dx[k];
		if(!ver(yy, xx)) continue;
		if(vet[yy][xx] == '.' && !vis[yy][xx])
			dfs(yy, xx, c+1);
	}
	vis[i][j] = false;
}

int main(int argc, char** argv) {
	while(scanf("%d%d", &n, &m) && (n+m)) {
		REP(i, 1, n)
			REP(j, 1, m) {
				scanf(" %c", &vet[i][j]);
				if(vet[i][j] == '.') {
					y = i;
					x = j;
				}
			}
		best = -1;
		// memset(vis, 0, sizeof(vis));
		dfs(y, x, 0);
		// memset(vis, 0, sizeof(vis));
		dfs(yf, xf, 0);
		printf("%d\n", best);
	}
	return 0;
}
