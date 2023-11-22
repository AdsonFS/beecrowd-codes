#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAXV 1010
typedef long long ll;
typedef pair<int, int> ii;
int dist[MAXV];

int dijkstra(int s, int e, int x, vector<ii> adj[])
{
	priority_queue< ii, vector<ii>, greater<ii> > pq;
	memset(dist, INF, sizeof(dist));
	dist[s] = 0;
	pq.push(mk(0, s));			// custo - vertice
	
	while(!pq.empty())
	{
		int u = pq.top().S;		// Vertice atual
		pq.pop();
		int t = adj[u].size();	// Quantidade de vizinhos
		
		for(int i = 0; i < t; i++)
		{
			int v = adj[u][i].F;		// Vertice destino
			int cost = adj[u][i].S;		// Custo
			if(dist[v] > dist[u] + cost && v != x)
			{
				dist[v] = dist[u] + cost;
				pq.push(mk(dist[u], v));
			}
		}
	}
	
	return dist[e];
}

void addEdge(int v1, int v2, vector<ii> adj[MAXV])
{
	adj[v1].pb(mk(v2, 1));		// vertice - custo
	adj[v2].pb(mk(v1, 1));		// vertice - custo
}

int main(int argc, char *argv[])
{
	int n, m, v1, v2, c, r, e;
	while(scanf("%d%d", &n, &m) != EOF)
	{
		vector<ii> adj[MAXV];
		for(int i = 0; i < m; i++)
		{
			scanf("%d%d", &v1, &v2);
			addEdge(v1, v2, adj);
		}
		scanf("%d%d%d", &c, &r, &e);
		printf("%d\n", dijkstra(c, r, e, adj));
	}
	
	return 0;
}
