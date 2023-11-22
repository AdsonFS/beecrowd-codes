#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
map<string, int> mapa;
vector<int> adj[310];
bool vis[310];
int n, m;

void dfs(int v) {
	vis[v] = true;
	int tam = adj[v].size();
	for(int i = 0; i < tam; i++) {
		int u = adj[v][i];
		if(!vis[u])
			dfs(u);
	}
}

int main(int argc, char** argv) {
	string x1, x2, x;
	scanf("%d%d", &n, &m);
	int p = 1;
	for(int i = 0; i < m; i++) {
		cin >> x1 >> x >> x2;
		if(mapa[x1] == 0)
			mapa[x1] = p++;
		if(mapa[x2] == 0)
			mapa[x2] = p++;
		adj[mapa[x1]].pb(mapa[x2]);
		adj[mapa[x2]].pb(mapa[x1]);
	}
	int sum = 0;
	for(int i = 1; i <= n; i++) {
		if(!vis[i]) {
			sum++;
			dfs(i);
		}
	}
	printf("%d\n", sum);
	return 0;
}

