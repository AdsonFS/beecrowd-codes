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
typedef pair<ii, int> pii;
const int MAX = 1e3+3;
vector<ii> adj[MAX];
int pd[MAX][MAX];
int T, N, M, K;

int solve(int i, int k) {
	if(k > K) return (1<<30);
	if(i == N-1) return 0;
	if(pd[i][k] != -1) return pd[i][k];
	pd[i][k] = (1 << 30);
	rep(j, 0, adj[i].size())
		pd[i][k] = min(pd[i][k], solve(adj[i][j].F, k+1) + adj[i][j].S);
	return pd[i][k];
}

int main(int argc, char ** argv) {
	int u, v, c;
	scanf("%d", &T);
	rep(t, 0, T) {
		scanf("%d%d%d", &N, &M, &K);
		memset(pd, -1, sizeof pd);
		rep(m, 0, M) {
			scanf("%d%d%d", &u, &v, &c);
			adj[u].pb(mk(v, c));
		}
		int ans = solve(0, 1);
		printf("%d\n", ans < (1<<30) ? ans : -1);
		REP(i, 0, N) adj[i].clear();
	}
	return 0;
}
