#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXN 100001
#define MAXC 1002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
bool vis[2001];
int cont;

void dfs(int v, vector<int> adj[])
{
	cont++;
	vis[v] = true;
	int tam = adj[v].size();
	for(int i = 0; i < tam; i++)
	{
		int u = adj[v][i];
		if(!vis[u])
			dfs(u, adj);
	}
}

int main(int argc, char *argv[])
{
	int n, m, v1, v2, op;
	while(scanf("%d%d", &n, &m) && (n+m) != 0)
	{
		bool ok = true;
		vector<int> adj[2001];
		for(int i = 0; i < m; i++)
		{
			scanf("%d%d%d", &v1, &v2, &op);
			adj[v1].pb(v2);
			if(op == 2)
				adj[v2].pb(v1);
		}
		for(int i = 1; i <= n; i++)
		{
			memset(vis, false, sizeof(vis));
			cont = 0;
			dfs(i, adj);
			if(cont != n)
			{
				ok = false;
				break;
			}
		}
		if(ok)
			printf("1\n");
		else
			printf("0\n");
	}
	
	return 0;
}
