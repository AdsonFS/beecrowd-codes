#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 100

typedef long long ll;
typedef pair<int, int> ii;

#define MAXT 1025

int bit[MAXT][MAXT];

int get(int i, int j) 
{
    i += 2; j += 2;
    int sum = 0;
    for(; i; i -= (i & -i))
        for(int g = j; g; g -= (g & -g))
            sum += bit[i][g];
    return sum;
}

int sum(int x1, int y1, int x2, int y2) 
{
    if (x1>x2) swap(x1,x2);
    if (y1>y2) swap(y1,y2);

    return get(x2, y2) - get(x2, y1 - 1) - get(x1 - 1, y2) + get(x1 - 1, y1 - 1);
}

void add(int i, int j, int x) 
{
    i += 2; j += 2;
    for(; i < MAXT; i += (i & -i))
        for(int g = j; g < MAXT; g += (g & -g))
            bit[i][g] += x;
}

int main(int argc, char *argv[])
{
	int c, l, p, n;
	while(scanf("%d%d%d", &c, &l, &p) && (c + l + p) != 0)
	{
		memset(bit, 0, sizeof(bit));
		scanf("%d", &n);
		char op;
		int q, x1, y1, x2, y2;
		for(int i = 0; i < n; i++)
		{
			cin >> op;
			if(op == 'A')
			{
				scanf("%d%d%d", &q, &x1, &y1);
				add(y1, x1, q);
			}
			else
			{
				scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
				ll v = sum(y1, x1, y2, x2);
				
				cout << v*p << "\n"; 
			}
		}
		printf("\n");
	}
	
	return 0;
}