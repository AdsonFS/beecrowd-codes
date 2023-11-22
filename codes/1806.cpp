#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXV 10002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;

vector<ii> adjB[MAXV], adjL[MAXV];
ll distB[MAXV];
ll distL[MAXV];

ll dijkstraB(int s, int e)
{
	priority_queue< ii, vector<ii>, greater<ii> > pq;
	memset(distB, INF, sizeof(distB));
	distB[s] = 0;
	pq.push(mk(0, s));			// custo - vertice
	
	while(!pq.empty())
	{
		int u = pq.top().S;
		int t = adjB[u].size();
		pq.pop();
		for(int i = 0; i < t; i++)
		{
			int v = adjB[u][i].F;
			int cost = adjB[u][i].S;
			if(distB[v] > distB[u] + cost)
			{
				distB[v] = distB[u] + cost;
				pq.push(mk(distB[v], v));
			}
		}
	}
	return distB[e];
}

void dijkstraL(int s)
{
	priority_queue< ii, vector<ii>, greater<ii> > pq;
	memset(distL, INF, sizeof(distL));
	distL[s] = 0;
	pq.push(mk(0, s));			// custo - vertice

	while(!pq.empty())
	{
		int u = pq.top().S;
		int t = adjL[u].size();
		pq.pop();
		for(int i = 0; i < t; i++)
		{
			int v = adjL[u][i].F;
			int cost = adjL[u][i].S;
			if(distL[v] > distL[u] + cost)
			{
				distL[v] = distL[u] + cost;
				pq.push(mk(distL[v], v));
			}
		}
	}
}

void addEdgeB(int v1, int v2, int c)
{
	adjB[v1].pb(mk(v2, c));		// vertice - custo
	adjB[v2].pb(mk(v1, c));		// vertice - custo
}

void addEdgeL(int v1, int v2, int c)
{
	adjL[v1].pb(mk(v2, c));		// vertice - custo
	adjL[v2].pb(mk(v1, c));		// vertice - custo
}

int main(int argc, char *argv[])
{
	int sum = 0;
	int n, c, s, b, v1, v2, custo, x;
	scanf("%d%d%d%d", &n, &c, &s, &b);
	vector<int> num;
	for(int i = 0; i < c; i++)
	{
		scanf("%d%d%d", &v1, &v2, &custo);
		addEdgeB(v1, v2, custo);
		addEdgeL(v1, v2, custo);
	}
	
	for(int i = 0; i < s; i++)
	{
		scanf("%d%d%d", &v1, &v2, &c);
		addEdgeL(v1, v2, c);
	}
	
	for(int i = 0; i < b; i++)
	{
		scanf("%d", &x);
		num.pb(x);
	}
	scanf("%d%d", &v1, &v2);
	dijkstraL(v2);
	ll bino = dijkstraB(v1, v2);
	for(int i = 0; i < b; i++)
	{
		if(distL[num[i]] <= bino)
			sum++;
	}
	printf("%d\n", sum);
	return 0;
}
