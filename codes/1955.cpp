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
const int MAX = 1e3+3;
vector<int> adj[MAX];
int N, U, x, ok;
int vis[MAX];

void solve(int u, int c) {
	vis[u] = c;
	rep(i, 0, adj[u].size()) {
		int v = adj[u][i];
		if(!vis[v] && c == 1) solve(v, 2);
		else if(!vis[v] && c == 2) solve(v, 1);
		else if(vis[v] == c) { puts("Fail!"); exit(0); }
	}
}

int main(int argc, char ** argv) {
	scanf("%d", &N);
	REP(i, 1, N) REP(j, 1, N) {
		scanf("%d", &x);
		if(!x) U = i, adj[i].pb(j);
	}
	solve(U, 1);
	puts("Bazinga!");
	return 0;
}
