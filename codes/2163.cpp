#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef pair<int, int> ii;
int vet[1002][1002];


int main(int argc, char *argv[])
{
	int n, m, l = 0, c = 0;
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
			cin >> vet[i][j];
	}
	
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(vet[i][j] == 42)
			{
				if(vet[i+1][j] == 7 && vet[i-1][j] == 7 && vet[i][j+1] == 7 && vet[i][j-1] == 7)
				{
					if(vet[i+1][j+1] == 7 && vet[i+1][j-1] == 7 && vet[i-1][j+1] == 7 && vet[i-1][j-1] == 7)
					{
						l = i;
						c = j;
						break;
					}
				}
			}
		}
	}
	printf("%d %d\n", l, c);
	
	return 0;
}
