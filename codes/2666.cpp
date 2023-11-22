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
const int MAX = 1e4+4;
vector<ii> adj[MAX];
int N, C, w[MAX];
int ans;

int dfs(int u, int p, int d) {
	rep(i, 0, adj[u].size()) {
		int v = adj[u][i].F;
		int c = adj[u][i].S;
		if(v == p) continue;
		dfs(v, u, c);
		w[u] += w[v];
	}
	ans += d * (w[u]/C + (w[u]%C != 0));
}

int main(int argc, char ** argv) {
	int u, v, c;
	scanf("%d%d", &N, &C);
	REP(i, 1, N) scanf("%d", w+i);
	rep(i, 1, N) {
		scanf("%d%d%d", &u, &v, &c);
		adj[u].pb(mk(v, c)); adj[v].pb(mk(u, c));
	}
	dfs(1, 1, 0);
	printf("%d\n", ans*2);
	return 0;
}
