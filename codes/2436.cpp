#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
int vet[MAX][MAX];
int vis[MAX][MAX];
int n, m, N, M;

void dfs(int i, int j) {
	if(i == 0 || i == n + 1 || j == 0 || j == m + 1) return;
	vis[i][j] = true;
	N = i; M = j;
	for(int k = 0; k < 4; k++) {
		if(!vis[i + dy[k]][j + dx[k]] && vet[i + dy[k]][j + dx[k]] == 1)
			dfs(i + dy[k], j + dx[k]);
	}
}

int main(int argc, char ** argv) {
	int x1, x2;
	scanf("%d%d%d%d", &n, &m, &x1, &x2);
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			scanf("%d", &vet[i][j]);
	dfs(x1, x2);
	printf("%d %d\n", N, M);
	return 0;
}
