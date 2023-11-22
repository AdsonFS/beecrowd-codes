#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef pair<int, int> ii;

int dp[100000][7];
int menor = 0x3f3f3f3f;

void addDp(int n, int x)
{
	int r;
	for(int i = 1; i <= 6; i++)
	{
		if(x == i)
			r = 0;
		else if(x + i == 7)
			r = 2;
		else
			r = 1;
		dp[n][i] = r;
	}
}

void menorColuna(int m, int t)
{
	int sum = 0;
	for(int i = 0; i < t; i++)
		sum += dp[i][m];
	
	menor = min(sum, menor);
}

int main(int argc, char *argv[])
{
	int n, x;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		addDp(i, x);
	}
	for(int i = 1; i <= 6; i++)
		menorColuna(i, n);
	
	printf("%d\n", menor);
	return 0;
}
