#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAXV 1010

int n, m, fimI, fimJ;
int ok;
typedef long long ll;
typedef pair<int, int> ii;
ll dist[MAXV][MAXV];
char vet[MAXV][MAXV];

void dijkstra(int y, int x)
{
	priority_queue<pair<int, ii> > pq;	// custo / i / j
	memset(dist, INF, sizeof(dist));
	dist[y][x] = 0;
	pq.push(mk(0, mk(y, x)));			// custo / i / j

	while(!pq.empty())
	{
		int i = pq.top().S.F;			// Pegando vertice atual
		int j = pq.top().S.S;

		pq.pop();						// removo o primeiro item da fila

		if(vet[i + 1][j] != '#')
		{
			if(dist[i + 1][j] > dist[i][j] + 1)
			{
				dist[i + 1][j] = dist[i][j] + 1; // Nova menor distancia
				pq.push(mk(-dist[i + 1][j], mk(i + 1, j))); // Adiciona o vertice na fila
			}
		}

		if(vet[i - 1][j] != '#')
		{
			if(dist[i - 1][j] > dist[i][j] + 1)
			{
				dist[i - 1][j] = dist[i][j] + 1; // Nova menor distancia
				pq.push(mk(-dist[i - 1][j], mk(i - 1, j))); // Adiciona o vertice na fila
			}
		}

		if(vet[i][j + 1] != '#')
		{
			if(dist[i][j + 1] > dist[i][j] + 1)
			{
				dist[i][j + 1] = dist[i][j] + 1; // Nova menor distancia
				pq.push(mk(-dist[i][j + 1], mk(i, j + 1))); // Adiciona o vertice na fila
			}
		}

		if(vet[i][j - 1] != '#')
		{
			if(dist[i][j - 1] > dist[i][j] + 1)
			{
				dist[i][j - 1] = dist[i][j] + 1; // Nova menor distancia
				pq.push(mk(-dist[i][j - 1], mk(i, j - 1))); // Adiciona o vertice na fila
			}
		}
	}
}

void ler(vector<ii> &fogo, vector<ii> &pessoa)
{
	for(int k = 1; k <= n; k++)
	{
		string linha;
		cin >> linha;
		for(int j = 1; j <= m; j++)
		{
			vet[k][j] = linha[j - 1];
			if(vet[k][j] == 'S')
				pessoa.pb(mk(k, j));
			else if(vet[k][j] == 'F')
				fogo.pb(mk(k, j));
			else if(vet[k][j] == 'E')
			{
				fimI = k;
				fimJ = j;
			}
		}
	}
}

int main()
{
	int casos;
	scanf("%d", &casos);
	for(int k = 0; k < casos; k++)
	{
		memset(vet, '#', sizeof(vet));
		scanf("%d%d", &n, &m);
		vector<ii> fogo, pessoa;
		ler(fogo, pessoa);
		
		int x1 = pessoa[0].S;
		int y1 = pessoa[0].F;

		dijkstra(fimI, fimJ);

		int dP = dist[y1][x1];
		
		int dF = INF, aux;
		
		int tamFogo = fogo.size();
		for(int i = 0; i < tamFogo; i++)
		{
			int x = fogo[i].S;
			int y = fogo[i].F;
			aux = dist[y][x];
			dF = min(dF, aux);
		}
		
		
		if(dP < dF)
			printf("Y\n");
		else
			printf("N\n");
	}
	return 0;
}
