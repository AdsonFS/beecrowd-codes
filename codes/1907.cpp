#include <bits/stdc++.h>
using namespace std;

#define MAXV 1030

bool vis[MAXV][MAXV];
char vet[MAXV][MAXV];
int cont = 0;
int n, m;

void dfs(int i, int j)
{
	vis[i][j] = true;
	
	if(i + 1 < n && vet[i+1][j] == '.' && !vis[i+1][j])
		dfs(i+1, j);
	if(i - 1 >= 0 && vet[i-1][j] == '.' && !vis[i-1][j])
		dfs(i-1, j);
	if(j + 1 < m && vet[i][j+1] == '.' && !vis[i][j+1])
		dfs(i, j+1);
	if(j - 1 >= 0 && vet[i][j-1] == '.' && !vis[i][j-1])
		dfs(i, j-1);
}

int main(int argc, char *argv[])
{
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++)
		cin >> vet[i];
	
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
			if(!vis[i][j] && vet[i][j] == '.')
			{
				dfs(i, j);
				cont++;
			}
	}
	printf("%d\n", cont);
	return 0;
}