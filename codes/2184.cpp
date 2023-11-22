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
const int MAXN = 1e5+5;
const int MAX = 1e3+3;
vector<ii> adj[MAXN];
int pd[5*MAX][MAX];
int p[MAXN][21];
int c[MAXN][21];
int h[MAXN];
ii q[5*MAX];

void dfs(int u, int pp, int w) {
	c[u][0] = w;
	p[u][0] = pp;
	h[u] = h[pp] + 1;
	REP(i, 1, 20) p[u][i] = p[p[u][i-1]][i-1];
	REP(i, 1, 20) c[u][i] = max(c[u][i-1], c[p[u][i-1]][i-1]);
	rep(i, 0, (int)adj[u].size())
		if(adj[u][i].F != pp) dfs(adj[u][i].F, u, adj[u][i].S);
}

ii lca(int u, int v) {
	int ans = 0;
	if(h[u] < h[v]) swap(u, v);
	PER(i, 20, 0)
		if(h[p[u][i]] >= h[v]) {
			ans = max(ans, c[u][i]);
			u = p[u][i];
		}
	if(u == v) return mk(u, ans);
	PER(i, 20, 0)
		if(p[u][i] != p[v][i]) {
			ans = max(ans, max(c[u][i], c[v][i]));
			u = p[u][i]; v = p[v][i];
		}
	return mk(p[u][0], max(ans, max(c[u][0], c[v][0])));
}

int main(int argc, char * * argv) {
	int N, K, Q, u, v, w;
	scanf("%d%d", &N, &K);
	rep(i, 1, N) {
		scanf("%d%d%d", &u, &v, &w);
		adj[u].pb(mk(v, w)); adj[v].pb(mk(u, w));
	}
	dfs(1, 1, 0);
	scanf("%d", &Q);
	REP(i, 1, Q)
		scanf("%d%d", &q[i].F, &q[i].S);
	REP(i, 1, Q) REP(k, 0, K) {
		pd[i][k] = pd[i-1][k];
		u = q[i].F; v = q[i].S;
		ii a = lca(u, v);
		int sz = h[u] + h[v] - 2*h[a.F] + 1;
		if(sz <= k) pd[i][k] = max(pd[i][k], pd[i-1][k-sz] + a.S);
	}
	printf("%d\n", pd[Q][K] ? pd[Q][K] : -1);
	return 0;
}
