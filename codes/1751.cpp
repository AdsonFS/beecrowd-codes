#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef unsigned long long int ull;
int N, M, w[MAX], m[MAX], W[MAX];
vector<int> adj[MAX];
vector<ii> E[MAX];

void dfs(int v = 1) {
	int t = adj[v].size();
	rep(i, 0, t) {
		int u = adj[v][i]; dfs(u);
		m[v] = max(m[v], m[u]);
	}
}

int precal(int v = 1) {
	int t = adj[v].size();
	rep(i, 0, t) {
		int u = adj[v][i];
		if(!m[u]) continue;
		int cost = precal(u);
		E[v].pb(mk(cost, u));
		W[v] += cost;
	}
	return W[v] + w[v];
}

int solve(int v = 1) {
	int ans = 1 << 30;
	int t = E[v].size();
	if(!E[v].size()) return 0;
	rep(i, 0, t) {
		int u = E[v][i].S;
		ans = min(ans, (solve(u) + W[v]) - E[v][i].F);
	}
	return ans;
}

int main(int argc, char** argv) {
	while(scanf("%d%d", &N, &M) != EOF) {
		int a, b, c;
		rep(i, 1, N) {
			scanf("%d%d%d", &a, &b, &c);
			adj[a].pb(b); w[b] = c;
		}
		rep(i, 0, M)
			scanf("%d", &a), m[a] = 1;
		dfs(); precal();
		printf("%d\n", solve());
		REP(i, 0, N) {
			adj[i].clear(), E[i].clear();
			W[i] = w[i] = m[i] = 0;
		}
	}
	return 0;
}