#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define S second
#define F first

typedef pair<int, int> ii;
int dp[101];
bool ok;

void setDP()
{
	for(int i = 0; i <= 100; i++)
		dp[i] = i * i;
}

void verificar(int j, int max, int n)
{
	int aux = j;
	int res = -1;
	for(int i = j; i <= max; i++)
	{
		while(aux <= max)
		{
			res = dp[i] + dp[aux];
			if(res < n)
				aux++;
			else if(res == n)
			{
				ok = true;
				break;
			}
			else
			{
				break;
			}
		}
	}
}

int main(int argc, char *argv[])
{
	int n;
	setDP();
	while(scanf("%d", &n) != EOF)
	{
		ok = false;
		if(n >= 0)
		{
			int max = sqrt(n) + 1;
			for(int i = 0; i <= max; i++)
				verificar(i, max, n);
		}
		if(ok)
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	return 0;
}