#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAXV 110
typedef long long ll;
typedef pair<int, int> ii;
ll dist[MAXV];

ll dijkstra(int s, int e, vector<ii> adj[MAXV])
{
	priority_queue< ii, vector<ii>, greater<ii> > pq;
	memset(dist, INF, sizeof(dist));
	dist[s] = 0;
	pq.push(mk(0, s));			// custo - vertice
	
	while(!pq.empty())
	{
		int u = pq.top().S;
		int t = adj[u].size();
		pq.pop();
		for(int i = 0; i < t; i++)
		{
			int v = adj[u][i].F;
			int cost = adj[u][i].S;
			if(dist[v] > dist[u] + cost)
			{
				dist[v] = dist[u] + cost;
				pq.push(mk(dist[v], v));
			}
		}
	}
	return dist[e];
}

void addEdge(int v1, int v2, int c, vector<ii> adj[MAXV])
{
	adj[v1].pb(mk(v2, c));		// vertice - custo
//	adj[v2].pb(mk(v1, c));		// vertice - custo
}

int main(int argc, char *argv[])
{
	int n, m, v1, v2, t, c;
	while(scanf("%d%d", &n, &m) != EOF)
	{
		vector<ii> adj1[MAXV], adj0[MAXV];
		for(int i = 0; i < m; i++)
		{
			scanf("%d%d%d%d", &v1, &v2, &t, &c);
			if(t == 0)
				addEdge(v1, v2, c, adj0);
			else
				addEdge(v1, v2, c, adj1);
		}
		ll menor = min(dijkstra(1, n, adj1), dijkstra(1, n, adj0));
		cout << menor << "\n";
	}
	
	return 0;
}
