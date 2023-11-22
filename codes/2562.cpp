#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXV 1002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
bool vis[MAXV];
int cont;

void dfs(int v, vector<int> adj[])
{
	cont++;
	vis[v] = true;
	int tam = adj[v].size();
	for(int i = 0; i < tam; i++)
	{
		int atual = adj[v][i];
		if(!vis[atual])
			dfs(atual, adj);
	}
}

void addEdge(int v1, int v2, vector<int> adj[])
{
	adj[v1].pb(v2);
	adj[v2].pb(v1);
}

int main(int argc, char *argv[])
{
	int n, m, x, v1, v2;
	while(scanf("%d%d", &n, &m) != EOF)
	{
		cont = 0;
		vector<int> adj[MAXV];
		for(int i = 0; i < m; i++)
		{
			scanf("%d%d", &v1, &v2);
			addEdge(v1, v2, adj);
		}
		memset(vis, false, sizeof(vis));
		scanf("%d", &x);
		dfs(x, adj);
		printf("%d\n", cont);
	}
	
	return 0;
}
