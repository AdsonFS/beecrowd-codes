#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
const int MAX = 1e5+5;
vector<int> adj[MAX];
vector<int> rev[MAX];
int vis[MAX], U, ans;
int VIS[MAX];

void dfs(int u) {
	if(vis[u]) return;
	vis[u] = 1;
	rep(i, 0, adj[u].size())
		dfs(adj[u][i]);
}

void DFS(int u) {
	if(VIS[u]) return;
	VIS[u] = 1;
	U = u;
	rep(i, 0, rev[u].size())
		if(!VIS[rev[u][i]]) return DFS(rev[u][i]);
}

int main(int argc, char ** argv) {
	int N, M, S, u, v;
	scanf("%d%d%d", &N, &M, &S);
	rep(i, 0, M) {
		scanf("%d%d", &u, &v);
		adj[u].pb(v); rev[v].pb(u);
	}
	dfs(S);
	REP(i, 1, N) {
		if(!vis[i]) {
			DFS(i); dfs(U); ans++;
		}
	}
	printf("%d\n", ans);
	return 0;
}
