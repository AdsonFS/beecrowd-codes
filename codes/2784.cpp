#include <bits/stdc++.h>
using namespace std;

//#define INF 0x3f3f3f3f
#define MAXV 1010
#define pb push_back
#define mk make_pair

typedef pair<int, int> ii;
int dist[MAXV], parent[MAXV];
vector<ii> adj[MAXV];					// vertice - custo
const int INF = 0x3f3f3f3f;

int dijkstra(int start, int n)
{
	// Fila de prioridade crescente
	priority_queue< ii, vector<ii>, greater<ii> > pq;
	
	// Inicializando
	memset(dist, INF, sizeof(dist));
	memset(parent, -1, sizeof(parent));
	dist[start] = 0;
	pq.push(mk(0, start));
	int menor = 2000;
	int maior = -1;

	while(!pq.empty())
	{
		int u = pq.top().second;		// u = vertice atual
		pq.pop();						// removo o primeiro item da fila
		int t = adj[u].size();			// Quantidade de elementos vizinhos de u
		for(int i = 0; i < t; i++)
		{
			int v = adj[u][i].first;	// v = vertice destino
			int cost = adj[u][i].second;// cost = custo
			if(dist[v] > dist[u] + cost)
			{
				dist[v] = dist[u] + cost;// Nova menor distancia
				parent[v] = u; 			 // Atualiza a lista de pais
				pq.push(mk(dist[v], v)); // Adiciona o vertice na fila
			}
		}
	}
	for(int i = 1; i <= n; i++)
	{
		if(i != start)
		{
			if(dist[i] > maior)
				maior = dist[i];
			if(dist[i] < menor)
				menor = dist[i];
		}
	}
	return maior - menor;					// Retorna a distancia
}

void addEdge(int v1, int v2, int c)
{
	adj[v1].pb(mk(v2, c));
	adj[v2].pb(mk(v1, c));
}

int main(int argc, char *argv[])
{
	int n, c, s;
	scanf("%d%d", &n, &c);
	for(int i = 0; i < c; i++)
	{
		int i1, i2, p;
		scanf("%d%d%d", &i1, &i2, &p);
		addEdge(i1, i2, p);
	}
	scanf("%d", &s);
	cout << dijkstra(s, n) << endl;
	
	return 0;
}