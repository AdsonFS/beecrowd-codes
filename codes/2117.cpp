#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
const int MAX = 5e3+3;
int N, M, x, cap[MAX][MAX];
map<char, int> mp[MAX];
vector<int> adj[MAX];
int p[MAX], vis[MAX];
char c, s[200];

bool bfs() {
	memset(vis, 0, sizeof vis);
	queue<int> q;
	vis[0] = 1;
	q.push(0);
	p[0] = -1;
	while(!q.empty()) {
		int u = q.front();
		rep(i, 0, adj[u].size()) {
			int v = adj[u][i];
			if(!vis[v] && cap[u][v]) {
				p[v] = u;
				vis[v] = 1;
				q.push(v);
				if(v == 3500) return 1;
			}
		}
		q.pop();
	}
	return 0;
}

int maxFlow() {
	int ans = 0;
	while(bfs()) {
		int aux = 3500;
		while(p[aux] != -1) {
			cap[p[aux]][aux]--;
			cap[aux][p[aux]]++;
			aux = p[aux];
		}
		ans++;
	}
	return ans;
}

int main(int argc, char** argv) {
	scanf("%d%d", &N, &M);
	REP(i, 1, N) {
		scanf(" %[^\n]", s);
		int t = strlen(s);
		rep(j, 0, t) mp[i][toupper(s[j])]++;
		cap[0][i] = 1;
		adj[0].pb(i);
	}
	rep(i, 1100, 1100+M) {
		scanf(" %c %d", &c, &x);
		REP(j, 1, N)
			if(mp[j][c] >= x)
				adj[j].pb(i), adj[i].pb(j), cap[j][i] = 1;
		adj[i].pb(3500);
		cap[i][3500] = 1;
	}
	printf("%d\n", maxFlow());
	return 0;
}
