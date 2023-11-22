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

void dfs(int u) {
	if(vis[u]) return;
	vis[u] = true;
	for(auto v : adj[u])
		dfs(v);
}

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int N, M, u, v, t = 1;
	while(cin >> N >> M && N|M) {
		rep(i, 0, M) {
			cin >> u >> v;
			adj[u].pb(v);
			adj[v].pb(u);
		}
		dfs(1);
		bool ok = true;
		REP(i, 1, N)
			if(!vis[i]) ok = false;
		cout << "Teste " << t++ << "\n";
		cout << (ok ? "normal" : "falha") << "\n\n";
		REP(i, 1, N) adj[i].clear();
		REP(i, 1, N) vis[i] = 0;
	}
	return 0;
}
