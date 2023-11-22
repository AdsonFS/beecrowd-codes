#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXV 1002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

struct ponto
{
	int x, y;
};

vector<ponto> num;
bool vis[MAXV];
int sum;

void dfs(int v, int n, int d)
{
	sum++;
	vis[v] = true;
	ponto p1, p2;
	p1 = num[v];
	
	for(int i = 0; i < n; i++)
	{
		if(!vis[i])
		{
			p2 = num[i];
			double dist = hypot((p1.x - p2.x), (p1.y - p2.y));
			if(dist <= d && !vis[i])
				dfs(i, n, d);
		}
	}
}

int main(int argc, char *argv[])
{
	ponto p1;
	int n, d;
	scanf("%d%d", &n, &d);
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d", &p1.x, &p1.y);
		num.pb(p1);
	}
	dfs(0, n, d);
	if(sum == n)
		printf("S\n");
	else
		printf("N\n");
	return 0;
}
