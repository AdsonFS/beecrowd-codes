#include <bits/stdc++.h>
using namespace std;

#define MAXV 49
#define pb push_back

bool vis[MAXV];
int cont;

void dfs(vector<int> num[], int u)
{
	cont++;
	vis[u] = true;
	int tam = num[u].size();
	for(int i = 0; i < tam; i++)
	{
		if(!vis[num[u][i]])
		{
			cont++;
			dfs(num, num[u][i]);
		}
	}
}

void addEdge(vector<int> num[], int v1, int v2)
{
	num[v1].pb(v2);
	num[v2].pb(v1);
}

int main(int argc, char *argv[])
{
	int t, n, v, a;
	scanf("%d", &t);
	for(int i = 0; i < t; i++)
	{
		vector<int> num[MAXV];
		scanf("%d", &n);
		scanf("%d%d", &v, &a);
		for(int k = 0; k < a; k++)
		{
			int v1, v2;
			scanf("%d%d", &v1, &v2);
			addEdge(num, v1, v2);
		}
		memset(vis, false, sizeof(vis));
		cont = -1;
		dfs(num, n);
		printf("%d\n", cont);
	}
	
	return 0;
}