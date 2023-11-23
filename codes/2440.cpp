#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 50000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
vector<int> adj[MAX];
bool vis[MAX];
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

int main(int argc, char ** argv) {
	int v1, v2;
	int sum = 0;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < m; i++) {
		scanf("%d%d", &v1, &v2);
		adj[v1].pb(v2);
		adj[v2].pb(v1);
	}
	for(int i = 1; i <= n; i++) {
		if(!vis[i]) {
			dfs(i);
			sum++;
		}
	}
	printf("%d\n", sum);
	return 0;
}
