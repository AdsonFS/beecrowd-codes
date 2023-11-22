#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXN 500010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;

int bubble_sort(vector<ii> &v)
{
	int tam = v.size();
	int aux1, aux2;
	int sum = 0;
	
	for(int i = 0; i < tam; i++)
	{
		for(int j = 1; j < tam; j++)
		{
			if(v[j].F < v[j-1].F)
			{
				sum += v[j].S + v[j-1].S;
				
				aux1 = v[j].F;
				aux2 = v[j].S;
				
				v[j].F = v[j-1].F;
				v[j].S = v[j-1].S;
				
				v[j-1].F = aux1;
				v[j-1].S = aux2;
			}
		}
	}
	
	return sum;
}

int main(int argc, char *argv[])
{
	int n, x;
	while(scanf("%d", &n) != EOF)
	{
		vector<ii> num;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &x);
			num.pb(mk(x, 0));
		}
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &x);
			num[i].S = x;
		}
		int inv = bubble_sort(num);
		printf("%d\n", inv);
	}
	
	return 0;
}

