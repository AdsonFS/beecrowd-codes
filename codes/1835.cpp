#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 110
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
vector<int> adj[MAX];
int t, n, m, h, ans;
bool vis[MAX];

void dfs(int u) {
	vis[u] = true;
	int tam = adj[u].size();
	rep(i, 0, tam) {
		int v = adj[u][i];
		if(!vis[v]) dfs(v);
	}
}

int main(int argc, char** argv) {
	int u, v;
	scanf("%d", &t);
	while(t--) {
		scanf("%d%d", &n, &m);
		rep(i, 0, m) {
			scanf("%d%d", &u, &v);
			adj[u].pb(v);
			adj[v].pb(u);
		}
		dfs(1);
		ans = 0;
		REP(i, 2, n) {
			if(vis[i]) continue;
			dfs(i); ans++;
		}
		if(!ans) printf("Caso #%d: a promessa foi cumprida\n", ++h);
		else printf("Caso #%d: ainda falta(m) %d estrada(s)\n", ++h, ans);
		REP(i, 0, n) {
			vis[i] = 0;
			adj[i].clear();
		}
	}
	return 0;
}
