#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXV 52
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int c, e, l, p;
bool vis[MAXV];

void dfs(vector<int> adj[], set<int> &num)
{
	memset(vis, false, sizeof(vis));
	queue<int> fila;
	fila.push(l);
	vis[l] = true;
	
	int aux1 = 0, aux2 = 1, cont = 0;
	while(!fila.empty())
	{
		
		cont++;
		if(cont == p+1)
			break;
		for(int k = 0; k < aux2; k++)
		{
			int v = fila.front();
			fila.pop();
			int tam = adj[v].size();
			for(int i = 0; i < tam; i++)
			{
				int u = adj[v][i];
				if(!vis[u])
				{
					vis[u] = true;
					fila.push(u);
					num.insert(u);
					aux1++;
				}
				
			}
		}
		aux2 = aux1;
		aux1 = 0;
	}
	
}

void addEdge(int v1, int v2, vector<int> adj[])
{
	adj[v1].pb(v2);
	adj[v2].pb(v1);
}

int main(int argc, char *argv[])
{
	int v1, v2;
	int ins = 1;
	while(scanf("%d%d%d%d", &c, &e, &l, &p) && (c+e+l+p) != 0)
	{
		set<int> num;
		set<int>::iterator it;
		vector<int> adj[MAXV];
		for(int i = 0; i < e; i++)
		{
			scanf("%d%d", &v1, &v2);
			addEdge(v1, v2, adj);
		}
		dfs(adj, num);
		printf("Teste %d\n", ins++);
		for(it = num.begin(); it != num.end(); it++)
				printf("%d ", *it);
		printf("\n\n");
	}
	return 0;
}



