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
typedef pair<int, ll> il;
const int MAX = 1e5+5;
int N, x, a[MAX], b[MAX];
int h[MAX], p[MAX][22];
vector<int> adj[MAX];
ll ans;

int lca(int u, int v) {
	if(h[u] < h[v]) swap(u, v);
	PER(i, 20, 0)
		if(h[p[u][i]] >= h[v])
			u = p[u][i];
	if(u == v) return u;
	PER(i, 20, 0)
		if(p[u][i] != p[v][i])
			u = p[u][i], v = p[v][i];
	return p[u][0];
}

void dfs(int u, int pp) {
	p[u][0] = pp;
	h[u] = h[pp] + 1;
	REP(i, 1, 20) p[u][i] = p[p[u][i-1]][i-1];
	rep(i, 0, adj[u].size())
		if(adj[u][i] != pp)
			dfs(adj[u][i], u);
}

void doit(int u) {
	h[u] = 0;
	REP(i, 0, 20) p[u][i] = u;
	rep(i, 0, adj[u].size())
		dfs(adj[u][i], u);
}

int main(int argc, char ** argv) {
	int u, v;
	scanf("%d", &N);
	REP(i, 1, N) {
		scanf("%d", &x);
		if(!a[x]) a[x] = i;
		else b[x] = i;
	}
	rep(i, 1, N) {
		scanf("%d%d", &u, &v);
		adj[u].pb(v); adj[v].pb(u);
	}
	doit(1);
	REP(i, 0, N/2) u = lca(a[i], b[i]), ans += (h[a[i]]-h[u]) + (h[b[i]]-h[u]);
	printf("%lld\n", ans);
	return 0;
}
