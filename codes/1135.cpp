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
vector<ii> adj[MAX];
int N, Q, h[MAX];
int p[MAX][22];
ll w[MAX];

int lca(int u, int v) {
	if(h[u] < h[v]) swap(u, v);
	PER(i, 20, 0) 
		if(h[p[u][i]] >= h[v])
			u = p[u][i];
	if(u == v) return u;
	PER(i, 20, 0)
		if(p[u][i] != p[v][i])
			u = p[u][i], v = p[v][i];
	u = p[u][0]; v = p[v][0];
	return u;
}

void dfs(int u, int pp, int c) {
	p[u][0] = pp;
	h[u] = h[pp] + 1;
	w[u] = (ll) w[pp] + c;
	REP(i, 1, 20) p[u][i] = p[p[u][i-1]][i-1];
	rep(i, 0, adj[u].size())
		if(adj[u][i].F != pp)
			dfs(adj[u][i].F, u, adj[u][i].S);
}

void doit(int u) {
	h[u] = 0;
	REP(i, 0, 20) p[u][i] = u;
	rep(i, 0, adj[u].size())
		dfs(adj[u][i].F, u, adj[u][i].S);
}

int main(int argc, char ** argv) {
	int u, v;
	while(scanf("%d", &N) && N) {
		REP(i, 1, N-1) {
			scanf("%d%d", &u, &v);
			adj[u].pb(mk(i, v)); adj[i].pb(mk(u, v));
		}
		doit(0);
		scanf("%d", &Q);
		rep(i, 0, Q) {
			scanf("%d%d", &u, &v);
			int a = lca(u, v);
			if(!i) printf("%lld", w[u]+w[v]-2*w[a]);
			else printf(" %lld", w[u]+w[v]-2*w[a]);
		}
		printf("\n");
		REP(i, 0, N) adj[i].clear();
	}
	return 0;
}
