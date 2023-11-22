#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int dy[] = {-1, 0, 1, 0};	// sul - leste - norte - leste
int dx[] = {0, 1, 0, -1};
bool vis[MAX][MAX];
int vet[MAX][MAX];
char c;

void dfs(int y, int x, int k) {
	vis[y][x] = true;
	if(vet[y + dy[k]][x + dx[k]] == 0 && !vis[y + dy[k]][x + dx[k]]) {
		printf("F ");
		return dfs(y + dy[k], x + dx[k], k);
	}
	int K = ((k + 1) + 4) % 4;
	if(vet[y + dy[K]][x + dx[K]] == 0 && !vis[y + dy[K]][x + dx[K]]) {
		printf("R F ");
		return dfs(y + dy[K], x + dx[K], K);
	}
	K = ((k - 1) + 4) % 4;
	if(vet[y + dy[K]][x + dx[K]] == 0 && !vis[y + dy[K]][x + dx[K]]) {
		printf("L F ");
		return dfs(y + dy[K], x + dx[K], K);
	}
}

int main(int argc, char** argv) {
	int n, m, y, x;
	while(scanf("%d%d", &n, &m) != EOF) {
		memset(vet, 1, sizeof(vet));
		memset(vis, false, sizeof(vis));
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= m; j++) {
				cin >> c;
				if(c == 'X') {
					vet[i][j] = 3;
					y = i;
					x = j;
				}
				else if(c == '0') vet[i][j] = 0;
				else vet[i][j] = 1;
			}
		}
		printf("F ");
		for(int k = 0; k < 4; k++)
			if(vet[y + dy[k]][x + dx[k]] == 0)
				dfs(y + dy[k], x + dx[k], k);
		printf("E\n");
	}	
	return 0;
}
