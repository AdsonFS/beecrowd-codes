#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int n, m, k, x;
	char vet[1005][1005];
	char op;
	int now = 0;
	char p[] = "RHCP";
	scanf("%d", &n);
	scanf("%d", &m);
	scanf("%d", &k);
	
	for(int j = 0; j < k; j++)
	{
		scanf(" %c", &op);
		scanf("%d", &x);
		
		if(op == 'L')
		{
			for(int i = 0; i <= m; i++)
				vet[x][i] = p[now];
		}
		else
		{
			for(int i = 0; i <= n; i++)
				vet[i][x] = p[now];
		}
		
		now++;
		if(now == 4)
			now = 0;
	}
	int r = 0, h = 0, c = 0, pe = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			if(vet[i][j] == 'R')
				r++;
			else if(vet[i][j] == 'H')
				h++;
			else if(vet[i][j] == 'C')
				c++;
			else if(vet[i][j] == 'P')
				pe++;
		}
	}
	printf("R%d H%d C%d P%d", r, h, c, pe);
	printf("\n");
	
	return 0;
}