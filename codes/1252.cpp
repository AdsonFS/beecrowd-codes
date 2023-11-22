#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define S second
#define F first
int m;
struct numero
{
	int v;
	int mod;
	int par;
};

bool comp(const numero &x1, const numero &x2)
{
	if(x1.mod != x2.mod)
		return (x1.mod < x2.mod);
	if(x1.par != x2.par)
		return (x1.par > x2.par);
	if(x1.par == 1 && x2.par == 1)
		return (x1.v > x2.v);
	return (x1.v < x2.v);
}

int main(int argc, char *argv[])
{
	int n, x;
	while(scanf("%d%d", &n, &m) && (n+m) != 0)
	{
		vector<numero> num;
		for(int i = 0; i < n; i++)
		{
			scanf("%d", &x);
			numero aux;
			aux.v = x;
			aux.mod = x % m;
			if(x % 2 == 0)
				aux.par = 0;
			else
				aux.par = 1;
			num.pb(aux);
		}
		sort(num.begin(), num.end(), comp);
		printf("%d %d\n", n, m);
		for(int i = 0; i < n; i++)
			printf("%d\n", num[i].v);
	}
	printf("0 0\n");
	return 0;
}
