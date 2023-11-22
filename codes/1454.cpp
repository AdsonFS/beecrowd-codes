#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXV 102
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
int dist[MAXV][MAXV];

void zerar()
{
	memset(dist, INF, sizeof(dist));
	for(int i = 1; i < MAXV; i++)
		for(int j = 1; j < MAXV; j++)
			if(i == j)
				dist[i][j] = 0;
}
void processar()
{
	for(int k = 1; k <= MAXV; k++)
		for(int i = 1; i <= MAXV; i++)
			for(int j = 1; j <= MAXV; j++)
				dist[i][j] = min(dist[i][j], max(dist[i][k], dist[k][j]));
}

int main(int argc, char *argv[])
{
	int n, m, v1, v2, c, ins = 1;
	while(scanf("%d%d", &n, &m) && (n+m) != 0)
	{
		zerar();
		for(int i = 0; i < m; i++)
		{
			scanf("%d%d%d", &v1, &v2, &c);
			dist[v1][v2] = c;
			dist[v2][v1] = c;
		}
		scanf("%d", &n);
		processar();
		printf("Instancia %d\n", ins++);
		for(int i = 0; i < n; i++)
		{
			scanf("%d%d", &v1, &v2);
			if(v1 != v2)
				printf("%d\n", dist[v1][v2]);
			else
				printf("0\n");
		}
		printf("\n");
	}
	
	return 0;
}
