#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 205
typedef long long ll;
typedef pair<int, int> ii;
priority_queue< int, vector<int>, greater<int> > num;
bool vis[MAX][MAX];
int vet[MAX][MAX];
int n, m, cont;

void dfs(int i, int j, int x)
{
	cont++;
	vis[i][j] = true;
	
	if(vet[i + 1][j] == x && !vis[i + 1][j])
		dfs(i + 1, j, x);
	if(vet[i - 1][j] == x && !vis[i - 1][j])
		dfs(i - 1, j, x);
	if(vet[i][j + 1] == x && !vis[i][j + 1])
		dfs(i, j + 1, x);
	if(vet[i][j - 1] == x && !vis[i][j - 1])
		dfs(i, j - 1, x);
}

void loop()
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cont = 0;
			if(!vis[i][j])
			{
				dfs(i, j, vet[i][j]);
				num.push(cont);
			}
		}
	}
}

void ler()
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
			cin >> vet[i][j];
	}
}

int main(int argc, char *argv[])
{
	memset(vet, -1, sizeof(vet));
	scanf("%d%d", &n, &m);
	ler();
	loop();
	printf("%d\n", num.top());
	return 0;
}
