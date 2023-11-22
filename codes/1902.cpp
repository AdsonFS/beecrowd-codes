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
const int MAX = 2e5+5;
vector<int> adj[MAX];
char s1[15], s2[15];
map<string, int> mp;
int N, ans, vis[MAX];

int dfs(int u) {
	if(vis[u] == 1) return 1;
	if(vis[u] == 2) return 0;
	vis[u] = 1;
	bool ok = 0;
	rep(i, 0, adj[u].size())
		ok |= dfs(adj[u][i]);
	vis[u] = 2;
	return ok;
}

int main(int argc, char ** argv) {
	while(scanf("%s %s", s1, s2) != EOF) {
		if(!mp[s1]) mp[s1] = ++N;
		if(!mp[s2]) mp[s2] = ++N;
		adj[mp[s1]].pb(mp[s2]);
	}
	REP(i, 1, N) ans += dfs(i);
	printf("%d\n", ans);
	return 0;
}
