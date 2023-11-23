#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 20010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int pai[MAX][21], p[MAX], N, M, S;
int dist[MAX][21], lvl[MAX];
vector<ii> E[MAX];
vector<pii> adj;

void dfs(int v, int p, int w) {
	lvl[v] = lvl[p]+ 1;
	pai[v][0] = p;
	dist[v][0] = w;
	REP(i, 1, 20) {
		pai[v][i] = pai[pai[v][i-1]][i-1];
		dist[v][i] = min(dist[v][i-1], dist[pai[v][i-1]][i-1]);
	}
	rep(i, 0, (int)E[v].size()) {
		int cost = E[v][i].S;
		int u = E[v][i].F;
		if(u == p) continue;
		dfs(u, v, cost);
	}
}

void doit(int root) {
	lvl[root] = 0;
	REP(i, 0, 20)
		pai[root][i] = root, dist[root][i] = INF;
	rep(i, 0, (int)E[root].size()) {
		int cost = E[root][i].S;
		int u = E[root][i].F;
		dfs(u, root, cost);
	}
}

int lca(int a, int b) {
	int menor = INF;
	if(lvl[a] < lvl[b])
		swap(a, b);
	PER(i, 20, 0) {
		if(lvl[pai[a][i]] >= lvl[b])
			menor = min(menor, dist[a][i]), a = pai[a][i];
	}
	if(a == b) return menor;
	PER(i, 20, 0) {
		if(pai[a][i] != pai[b][i]) {
			menor = min(menor, min(dist[a][i], dist[b][i]));
			a = pai[a][i]; b = pai[b][i];
		}
	}
	menor = min(menor, min(dist[a][0], dist[b][0]));
	a = pai[a][0], b = pai[b][0];
	return menor;
}

int find(int a) {
	if(p[a] == a) return a;
	return p[a] = find(p[a]);
}

int main(int argc, char** argv) {
	while(scanf("%d%d%d", &N, &M, &S) != EOF) {
		int a, b, w;
		adj.clear();
		REP(i, 0, N) 
			p[i] = i, E[i].clear();
		rep(i, 0, M) {
			scanf("%d%d%d", &a, &b, &w);
			adj.pb(mk(w, mk(a, b)));
		}
		sort(all(adj), greater<pii>());
		rep(i, 0, M) {
			a = find(adj[i].S.F);
			b = find(adj[i].S.S);
			w = adj[i].F;
			if(a != b) {
				p[a] = b;
				E[a].pb(mk(b, w));
				E[b].pb(mk(a, w));
			}
		}
		doit(1);
		rep(i, 0, S) {
			scanf("%d%d", &a, &b);
			printf("%d\n", lca(a, b));
		}
	}
	return 0;
}
