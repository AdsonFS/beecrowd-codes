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
typedef pair<ii, int> pii;
const int MAX = 1e4+4;
vector<int> adj[MAX];
int N, a, b, s[MAX];
bool ok = true;

void dfs(int u, int p) {
	s[u]++;
	int sum = 0;
	rep(i, 0, adj[u].size()) {
		int v = adj[u][i];
		if(v == p) continue;
		dfs(v, u);
		sum = s[v];
		s[u] += s[v];
	}
	rep(i, 0, adj[u].size()) {
		int v = adj[u][i];
		if(v == p) continue;
		if(s[v] != sum) ok = false;
	}
}

int main(int argc, char** argv) {
	scanf("%d", &N);
	rep(i, 0, N) {
		scanf("%d%d", &a, &b);
		adj[a].pb(b); adj[b].pb(a);
	}
	dfs(0, 0);
	printf("%s\n", ok ? "bem" : "mal");
	return 0;
}

