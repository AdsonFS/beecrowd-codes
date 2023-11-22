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
int N, w[MAX], pd[MAX][2];
vector<int> adj[MAX];

int dfs(int u) {
	pd[u][1] = w[u];
	rep(i, 0, adj[u].size()) {
		int v = adj[u][i];
		pd[u][0] += dfs(v);
		pd[u][1] += pd[v][0];
	}
	return max(pd[u][0], pd[u][1]);
}

int main(int argc, char** argv) {
	scanf("%d", &N);
	REP(i, 1, N) scanf("%d", &w[i]);
	REP(i, 2, N) scanf("%d", &w[0]), adj[w[0]].pb(i);
	printf("%d\n", dfs(1));
	return 0;
}
