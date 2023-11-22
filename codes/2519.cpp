#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXN 1004
#define MAXC 300
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int bit[MAXN][MAXN];

int get(int i, int j)
{
	i += 2;
	j += 2;
	int sum = 0;
	for(; i; i -= (i & -i))
		for(int g = j; g; g -= (g & -g))
			sum += bit[i][g];
	return sum;
}

int sum(int x1, int y1, int x2, int y2)
{
	if (x1 > x2) swap(x1, x2);
	if (y1 > y2) swap(y1, y2);

	return get(x2, y2) - get(x2, y1 - 1) - get(x1 - 1, y2) + get(x1 - 1, y1 - 1);
}

void add(int i, int j, int x)
{
	i += 2;
	j += 2;
	for(; i < MAXN; i += (i & -i))
		for(int g = j; g < MAXN; g += (g & -g))
			bit[i][g] += x;
}

void ler(int n, int m)
{
	int x;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
		{
			scanf("%d", &x);
			add(i, j, x);
		}
}

int main(int argc, char *argv[])
{
	int n, m, q;
	while(scanf("%d%d", &n, &m) != EOF)
	{
		memset(bit, 0, sizeof(bit));
		ler(n, m);
		int op, x1, y1, x2, y2;
		scanf("%d", &q);
		for(int i = 0; i < q; i++)
		{
			scanf("%d%d%d%d%d", &op, &y1, &x1, &y2, &x2);
			if(op == 0)
			{
				add(y1, x1, -1);
				add(y2, x2, 1);
			}
			else
			{
				int v = sum(y1, x1, y2, x2);
				printf("%d\n", v);
			}
		}
	}

	return 0;
}
