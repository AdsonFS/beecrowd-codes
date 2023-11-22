#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXN 100002
#define MAXC 1002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
bool vis[21];

void dfs(int v, int b, vector<int> adj[])
{
	vis[v] = true;
	int tam = adj[v].size();
	vector<int> num;
	for(int i = 0; i < tam; i++)
		num.pb(adj[v][i]);
	sort(all(num));
	for(int i = 0; i < tam; i++)
	{
		int u = num[i];
		if(u == num[i - 1])
			continue;
		if(!vis[u])
		{
			for(int j = 0; j < b; j++)
				printf(" ");
			printf("%d-%d pathR(G,%d)\n", v, u, u);
			dfs(u, b+2, adj);
		}
		else
		{
			for(int j = 0; j < b; j++)
				printf(" ");
			printf("%d-%d\n", v, u);
		}
	}
}

int main(int argc, char** argv)
{
	int n, v, e, v1, v2;
	scanf("%d", &n);
	for(int k = 1; k <= n; k++)
	{
		vector<int> adj[21];
		scanf("%d%d", &v, &e);
		for(int i = 0; i < e; i++)
		{
			scanf("%d%d", &v1, &v2);
			adj[v1].pb(v2);
		}
		memset(vis, false, sizeof(vis));
		printf("Caso %d:\n", k);
		for(int i = 0; i <= v; i++)
		{
			if(!vis[i] && adj[i].size() > 0)
			{
				dfs(i, 2, adj);
				printf("\n");
			}
		}
	}
	
	return 0;
}
