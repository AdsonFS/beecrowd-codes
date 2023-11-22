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
const int MAX = 5e3+3;
int h[MAX], p[MAX][22];
vector<int> adj[MAX];
int N, D, M, a[MAX];
ll w[MAX], pd[MAX];

ll solve() {
	REP(i, 1, N) PER(j, D, a[i]) 
		pd[j] = max(pd[j], pd[j-a[i]]+w[i]);
	return pd[D];
}

int lca(int u, int v) {
	if(h[u] < h[v]) swap(u, v);
	PER(i, 20, 0)
		if(h[p[u][i]] >= h[v])
			u = p[u][i];
	if(u == v) return u;
	PER(i, 20, 0) {
		if(p[u][i] != p[v][i])
			u = p[u][i], v = p[v][i];
	}
	return p[u][0];
}

void calc(int u, int pp) {
	rep(i, 0, adj[u].size()) {
		int v = adj[u][i];
		if(v == pp) continue;
		calc(v, u);
		w[u] += w[v];
	}
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
	h[u] = 1;
	REP(i, 0, 20) p[u][i] = u;
	rep(i, 0, adj[u].size())
		dfs(adj[u][i], u);
}

int main(int argc, char ** argv) {
	int Q, u, v, c;
	scanf("%d%d", &N, &D);
	rep(i, 1, N) {
		scanf("%d%d", &u, &v);
		adj[u].pb(v); adj[v].pb(u);
	}
	doit(1);
	scanf("%d", &M);
	REP(i, 1, N) a[i] = (1 << 30);
	REP(i, 1, M) scanf("%d%d", &u, &v), a[u] = v;
	scanf("%d", &Q);
	rep(q, 0, Q) {
		scanf("%d%d%d", &u, &v, &c);
		int a = lca(u, v);
		w[u] += c; w[v] += c;
		w[a] -= c;
		if(p[a][0] != a) w[p[a][0]] -= c;
	}
	calc(1, 1);
	printf("%lld\n", solve());
	return 0;
}

