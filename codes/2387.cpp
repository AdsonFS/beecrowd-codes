#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef pair<int, int> ii;

bool comp(const ii &x1, const ii &x2)
{
	if(x1.S != x2.S)
		return (x1.S < x2.S);
	return (x1.F < x2.F);
}

int main(int argc, char *argv[])
{
	int cont = 1;
	int n, x1, x2;
	scanf("%d", &n);
	vector<ii> num;
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d", &x1, &x2);
		num.pb(mk(x1, x2));
	}
	sort(num.begin(), num.end(), comp);
	int fim = num[0].S;
	for(int i = 1; i < n; i++)
	{
		if(num[i].F >= fim)
		{
			cont++;
			fim = num[i].S;
		}
	}
	printf("%d\n", cont);
	return 0;
}
