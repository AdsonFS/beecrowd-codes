#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
const int MAX = 2e5+5;
vector<int> adj[MAX];
int vis[MAX];

void dfs(int u, bool &ok) {
	if(vis[u] == 2) return;
	if(vis[u] == 1) return void(ok = false);
	vis[u] = 1;
	for(auto v : adj[u])
		dfs(v, ok);
	vis[u] = 2;
}

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int T, N, M, u, v;
	cin >> T;
	while(T--) {
		bool ok = true;
		cin >> N >> M;
		rep(i, 0, M) {
			cin >> u >> v;
			adj[u].pb(v);
		}
		REP(i, 1, N) dfs(i, ok);
		cout << (!ok ? "SIM" : "NAO") << "\n";
		REP(i, 1, N) vis[i] = 0;
		REP(i, 1, N) adj[i].clear();
	}
	return 0;
}
