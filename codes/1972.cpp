#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define mk make_pair
#define pb push_back
#define MAXV 510
#define S second
#define F first

typedef pair<int, int> ii;
int poder[MAXV][MAXV];
char vet[MAXV][MAXV];
int n, m;

int dijkstra(int x, int y, int x1, int y1)
{
	priority_queue<pair<int, ii> > pq;	// custo / i / j
	memset(poder, INF, sizeof(poder));
	poder[x][y] = 0;
	pq.push(mk(0, mk(x, y)));			// custo / i / j
	
	while(!pq.empty())
	{
		int i = pq.top().S.F;			// Pegando vertice atual
		int j = pq.top().S.S;
		
		pq.pop();						// removo o primeiro item da fila
		
		if(i + 1 < n && vet[i+1][j] != '#')
		{
			if(vet[i+1][j] == '.' || vet[i+1][j] == 'E')
			{
				if(poder[i+1][j] > poder[i][j])
				{
					poder[i+1][j] = poder[i][j];// Nova menor distancia
					pq.push(mk(-poder[i+1][j], mk(i+1, j))); // Adiciona o vertice na fila
				}
			}
			else
			{
				
				if(poder[i+1][j] > poder[i][j] + (vet[i+1][j] - '0'))
				{
					poder[i+1][j] = poder[i][j] + (vet[i+1][j] - '0');// Nova menor distancia
					pq.push(mk(-poder[i+1][j], mk(i+1, j))); // Adiciona o vertice na fila
				}
			}
		}
		if(i - 1 >= 0 && vet[i-1][j] != '#')
		{
			if(vet[i-1][j] == '.' || vet[i-1][j] == 'E')
			{
				if(poder[i-1][j] > poder[i][j])
				{
					poder[i-1][j] = poder[i][j];// Nova menor distancia
					pq.push(mk(-poder[i-1][j], mk(i-1, j))); // Adiciona o vertice na fila
				}
			}
			else
			{
				
				if(poder[i-1][j] > poder[i][j] + (vet[i-1][j] - '0'))
				{
					poder[i-1][j] = poder[i][j] + (vet[i-1][j] - '0');// Nova menor distancia
					pq.push(mk(-poder[i-1][j], mk(i-1, j))); // Adiciona o vertice na fila
				}
			}
		}
		if(j + 1 < m && vet[i][j+1] != '#')
		{
			if(vet[i][j+1] == '.' || vet[i][j+1] == 'E')
			{
				if(poder[i][j+1] > poder[i][j])
				{
					poder[i][j+1] = poder[i][j];// Nova menor distancia
					pq.push(mk(-poder[i][j+1], mk(i, j+1))); // Adiciona o vertice na fila
				}
			}
			else
			{
				
				if(poder[i][j+1] > poder[i][j] + (vet[i][j+1] - '0'))
				{
					poder[i][j+1] = poder[i][j] + (vet[i][j+1] - '0');// Nova menor distancia
					pq.push(mk(-poder[i][j+1], mk(i, j+1))); // Adiciona o vertice na fila
				}
			}
		}
		if(j - 1 >= 0 && vet[i][j-1] != '#')
		{
			if(vet[i][j-1] == '.' || vet[i][j-1] == 'E')
			{
				if(poder[i][j-1] > poder[i][j])
				{
					poder[i][j-1] = poder[i][j];// Nova menor distancia
					pq.push(mk(-poder[i][j-1], mk(i, j-1))); // Adiciona o vertice na fila
				}
			}
			else
			{
				
				if(poder[i][j-1] > poder[i][j] + (vet[i][j-1] - '0'))
				{
					poder[i][j-1] = poder[i][j] + (vet[i][j-1] - '0');// Nova menor distancia
					pq.push(mk(-poder[i][j-1], mk(i, j-1))); // Adiciona o vertice na fila
				}
			}
		}
	}
	if(poder[x1][y1] == INF)
		return -1;
	return poder[x1][y1];					// Retorna a distancia minima(poder)
}

int main(int argc, char *argv[])
{
	scanf("%d%d", &n, &m);
	int x, x1, y, y1;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> vet[i][j];
			if(vet[i][j] == 'H')
			{
				x = i;
				y = j;
			}
			else if(vet[i][j] == 'E')
			{
				x1 = i;
				y1 = j;
			}
		}
	}
	int ve = dijkstra(x, y, x1, y1);
	if(ve == -1)
		printf("ARTSKJID\n");
	else
		printf("%d\n", ve);
	
	return 0;
}