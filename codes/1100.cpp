#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAXV 15

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int vet[MAXV][MAXV];
int dist[MAXV][MAXV];

int dijkstra(int x1, int y1, int x2, int y2)
{
	priority_queue< pii, vector<pii>, greater<pii> > pq;
	memset(dist, INF, sizeof(dist));
	dist[x1][y1] = 0;
	pq.push(mk(0, mk(x1, y1)));			// custo - vertice
	while(!pq.empty())
	{
		int x = pq.top().S.F;
		int y = pq.top().S.S;
		pq.pop();

		if(dist[x + 2][y + 1] > dist[x][y] + 1 && vet[x + 2][y + 1] != -1)
		{
			dist[x + 2][y + 1] = dist[x][y] + 1;
			pq.push(mk(dist[x + 2][y + 1], mk(x + 2, y + 1)));
		}
		
		if(dist[x + 2][y - 1] > dist[x][y] + 1 && vet[x + 2][y - 1] != -1)
		{
			dist[x + 2][y - 1] = dist[x][y] + 1;
			pq.push(mk(dist[x + 2][y - 1], mk(x + 2, y - 1)));
		}
		//////////
		if(dist[x - 2][y + 1] > dist[x][y] + 1 && vet[x - 2][y + 1] != -1)
		{
			dist[x - 2][y + 1] = dist[x][y] + 1;
			pq.push(mk(dist[x - 2][y + 1], mk(x - 2, y + 1)));
		}
		
		if(dist[x - 2][y - 1] > dist[x][y] + 1 && vet[x - 2][y - 1] != -1)
		{
			dist[x - 2][y - 1] = dist[x][y] + 1;
			pq.push(mk(dist[x - 2][y - 1], mk(x - 2, y - 1)));
		}
		////////////////////////////////////////////////////////////////////
		
		if(dist[x + 1][y + 2] > dist[x][y] + 1 && vet[x + 1][y + 2] != -1)
		{
			dist[x + 1][y + 2] = dist[x][y] + 1;
			pq.push(mk(dist[x + 1][y + 2], mk(x + 1, y + 2)));
		}
		
		if(dist[x - 1][y + 2] > dist[x][y] + 1 && vet[x - 1][y + 2] != -1)
		{
			dist[x - 1][y + 2] = dist[x][y] + 1;
			pq.push(mk(dist[x - 1][y + 2], mk(x - 1, y + 2)));
		}
		/////////////
		if(dist[x + 1][y - 2] > dist[x][y] + 1 && vet[x + 1][y - 2] != -1)
		{
			dist[x + 1][y - 2] = dist[x][y] + 1;
			pq.push(mk(dist[x + 1][y - 2], mk(x + 1, y - 2)));
		}
		
		if(dist[x - 1][y - 2] > dist[x][y] + 1 && vet[x - 1][y - 2] != -1)
		{
			dist[x - 1][y - 2] = dist[x][y] + 1;
			pq.push(mk(dist[x - 1][y - 2], mk(x - 1, y - 2)));
		}
	}
	return dist[x2][y2];
}


void setVet()
{
	for(int i = 0; i < 15; i++)
	{
		vet[0][i] = -1;
		vet[1][i] = -1;

		vet[10][i] = -1;
		vet[11][i] = -1;

		vet[i][0] = -1;
		vet[i][1] = -1;

		vet[i][10] = -1;
		vet[i][11] = -1;
	}
}

int main(int argc, char *argv[])
{
	setVet();
	string s1, s2;
	while(cin >> s1 >> s2)
	{
		int x1 = ((int)s1[0]) - 95;
		int x2 = ((int)s2[0]) - 95;
		int y1 = ((int)s1[1]) - 47;
		int y2 = ((int)s2[1]) - 47;

		int v = dijkstra(x1, y1, x2, y2);
		printf("To get from %s to %s takes %d knight moves.\n", s1.c_str(), s2.c_str(), v);
	}

	return 0;
}

