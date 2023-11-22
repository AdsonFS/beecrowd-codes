#include <bits/stdc++.h>
using namespace std;

int vet[100][100];
bool vis[100][100];
int cont;

void dfs(int i, int j, int n)
{
	vis[i][j] = true;
	cont++;
	if(j + 1 < n && !vis[i][j + 1] && vet[i][j + 1] >= vet[i][j])
		dfs(i, j + 1, n);
	if(i + 1 < n && !vis[i + 1][j] && vet[i + 1][j] >= vet[i][j])
		dfs(i + 1, j, n);
	if(j - 1 >= 0 && !vis[i][j - 1] && vet[i][j - 1] >= vet[i][j])
		dfs(i, j - 1, n);
	if(i - 1 >= 0 && !vis[i - 1][j] && vet[i - 1][j] >= vet[i][j])
		dfs(i - 1, j, n);
}

int main(int argc, char *argv[])
{
	int n, l, c;
	scanf("%d%d%d", &n, &l, &c);
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < n; j++)
			cin >> vet[i][j];
	}
	dfs(l-1, c-1, n);
	printf("%d\n", cont);
	return 0;
}