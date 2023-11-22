#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 510

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
char di[] = {'A', 'V', '<', '>'};
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
char vet[MAX][MAX];
bool vis[MAX][MAX];
int sum, n;
bool ok;

void dfs(int i, int j) {
	if(i == 0 || i == n + 1 || j == 0 || j == n + 1 || vis[i][j] == true) {
		ok = true;
		return;
	}
	sum--;
	vis[i][j] = true;
	for(int k = 0; k < 4; k++) {
		if(!vis[i + dy[k]][j + dx[k]] && vet[i + dy[k]][j + dx[k]] == di[k])
			dfs(i + dy[k], j + dx[k]);
	}
}

int main(int argc, char * * argv) {
	scanf("%d", & n);
	sum = n * n;
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			scanf(" %c", & vet[i][j]);
	
	if(vet[1][1] == di[0] || vet[1][1] == di[2]) dfs(1, 1);
	if(vet[1][n] == di[0] || vet[1][n] == di[3]) dfs(1, n);
	if(vet[n][1] == di[1] || vet[n][1] == di[2]) dfs(n, 1);
	if(vet[n][n] == di[1] || vet[n][n] == di[3]) dfs(n, n);
	
	for(int i = 2; i < n; i++) {
		if(vet[i][1] == di[2]|| vet[i][1] == true) dfs(i, 1);
		if(vet[i][n] == di[3] || vet[i][n] == true) dfs(i, n);
		if(vet[1][i] == di[0] || vet[1][i] == true) dfs(1, i);
		if(vet[n][i] == di[1]|| vet[n][i] == true) dfs(n, i);
	}
	
	printf("%d\n", sum);

	return 0;
}
