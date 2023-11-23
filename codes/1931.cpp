#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXV 10002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
vector<ii> adj[MAXV];
int dist[MAXV];

int dijkstra(int s, int e)
{
	priority_queue< ii, vector<ii>, greater<ii> > pq;
	memset(dist, INF, sizeof(dist));
	dist[s] = 0;
	pq.push(mk(0, s));			// custo - vertice
	while(!pq.empty())
	{
		int u1 = pq.top().S;
		int t = adj[u1].size();
		pq.pop();
		
		for(int vi = 0; vi < t; vi++)
		{
			int custo_pai = adj[u1][vi].S;
			int u = adj[u1][vi].F;
			int tam = adj[u].size();
			for(int i = 0; i < tam; i++)
			{
				int v = adj[u][i].F;
				int cost = adj[u][i].S + custo_pai;
				if(dist[v] > dist[u1] + cost)
				{
					dist[v] = dist[u1] + cost;
					pq.push(mk(dist[v], v));
				}
			}
		}
	}
	return dist[e];
}

void addEdge(int v1, int v2, int c)
{
	adj[v1].pb(mk(v2, c));		// vertice - custo
	adj[v2].pb(mk(v1, c));		// vertice - custo
}

int main(int argc, char *argv[])
{
	int n, m, v1, v2, custo;
	scanf("%d%d", &n, &m);
	for(int i = 0; i < m; i++)
	{
		scanf("%d%d%d", &v1, &v2, &custo);
		addEdge(v1, v2, custo);
	}
	
	int d = dijkstra(1, n);
	if(d != INF)
		printf("%d\n", d);
	else
		printf("-1\n");

	return 0;
}
