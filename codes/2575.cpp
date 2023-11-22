#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 1000010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
vector<pii> adj[MAX];
map<int, int> mapa;
vector<int> num;
int vis[MAX];
int VIS[MAX];

void DFS(int u) {
	VIS[u] = true;
	int tam = adj[u].size();
	rep(i, 0, tam) {
		int v = adj[u][i].F.F;
		int e = adj[u][i].S;
		if(mapa[e]) {
			num.pb(e);
			continue;
		}
		if(!VIS[v]) DFS(v);
	}
}

int dfs(int u, int s) {
	vis[u] = true;
	int sum = s;
	int tam = adj[u].size();
	rep(i, 0, tam) {
		int v = adj[u][i].F.F;
		int c = adj[u][i].F.S;
		int e = adj[u][i].S;
		if(vis[v]) continue;
		int valor = dfs(v, c);
		if(valor > 0)
			sum += valor;
		else
			mapa[e] = 1;
	}
	return sum;
}

int main(int argc, char** argv) {
	int n, d, a, b, w;
	scanf("%d", &n);
	while(scanf("%d%d%d%d", &d, &a, &b, &w) != EOF) {
		adj[a].pb(mk(mk(b, w), d));
		adj[b].pb(mk(mk(a, w), d));
	}
	int ans = dfs(0, 0);
	DFS(0);
	int tam = num.size();
	printf("%d %d\n", ans, tam);
	if(tam) {
		sort(all(num));
		printf("%d", num[0]);
		for(int i = 1; i < tam; i++)
			printf(" %d", num[i]);
		printf("\n");
	}
	return 0;
}


