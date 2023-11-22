#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAXV 42

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int vet[11][MAXV];
int dist[11][11];
int n, k, X1, Y1, X2, Y2;

int dijkstra()
{
	priority_queue< pii, vector<pii>, greater<pii> > pq;
	memset(dist, INF, sizeof(dist));
	dist[Y1][X1] = 0;
	pq.push(mk(0, mk(Y1, X1)));			// custo - vertice
	while(!pq.empty())
	{
		int y = pq.top().S.F;
		int x = pq.top().S.S;
		int xx = x * 4;
		pq.pop();
		
		if(y - 1 >= 0 && dist[y - 1][x] > dist[y][x] + 1 && vet[y][xx] == 1)		// Norte
		{
			dist[y - 1][x] = dist[y][x] + 1;
			pq.push(mk(dist[y - 1][x], mk(y - 1, x)));
		}
		
		if(y + 1 < n && dist[y + 1][x] > dist[y][x] + 1 && vet[y][xx + 1] == 1)		// Sul
		{
			dist[y + 1][x] = dist[y][x] + 1;
			pq.push(mk(dist[y + 1][x], mk(y + 1, x)));
		}
		
		if(x - 1 >= 0 && dist[y][x - 1] > dist[y][x] + 1 && vet[y][xx + 2] == 1)	// Oeste
		{
			dist[y][x - 1] = dist[y][x] + 1;
			pq.push(mk(dist[y][x - 1], mk(y, x - 1)));
		}
		
		if(x + 1 < n && dist[y][x + 1] > dist[y][x] + 1 && vet[y][xx + 3] == 1)		// Leste
		{
			dist[y][x + 1] = dist[y][x] + 1;
			pq.push(mk(dist[y][x + 1], mk(y, x + 1)));
		}
	}
	return dist[Y2][X2];
}

void ler();

int main(int argc, char *argv[])
{
	while(scanf("%d", &n) && n != 0)
	{
		ler();
		scanf("%d", &k);
		for(int i = 0; i < k; i++)
		{
			scanf("%d%d%d%d", &X1, &Y1, &X2, &Y2);
			Y1 = n - 1 - Y1;
			Y2 = n - 1 - Y2; 
			int v = dijkstra();
			if(v != INF)
				printf("%d\n", v);
			else
				printf("Impossible\n");
		}
		printf("\n");
	}

	return 0;
}

void ler()
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < (n*4); j++)
			cin >> vet[i][j];
	}
	
}