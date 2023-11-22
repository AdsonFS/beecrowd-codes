#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXN 100002
#define MAXC 1002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
char vet[60][60];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

void dfs(int y, int x)
{
	vet[y][x] = 'T';
	for(int i = 0; i < 4; i++)
		if(vet[y + dy[i]][x + dx[i]] == 'A')
			dfs(y + dy[i], x + dx[i]);
}

void ler(int n, int m)
{
	memset(vet, 'X', sizeof(vet));
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin >> vet[i][j];
}

void printar(int n, int m)
{
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= m; j++)
			printf("%c", vet[i][j]);
		printf("\n");
	}
	printf("\n");
}

int main(int argc, char** argv)
{

	int n, m;
	while(scanf("%d%d", &n, &m) && (n + m) != 0)
	{
		ler(n, m);
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++)
				if(vet[i][j] == 'T')
					dfs(i, j);
		printar(n, m);
	}

	return 0;
}
