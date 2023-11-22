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
#define MAX 300
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, 1, -1};
char vet[MAX][MAX];
bool vis[MAX][MAX];
int lobo, ovelha;
int n, m, w, s;

bool ver(int i, int j) {
	return (i >= 0 && i <= n && j >= 0 && j <= m);
}

void dfs(int y, int x) {
	vis[y][x] = true;
	if(vet[y][x] == 'k') ovelha++;
	else if(vet[y][x] == 'v') lobo++;
	for(int k = 0; k < 4; k++) {
		int yy = y + dy[k];
		int xx = x + dx[k];
		if(ver(yy, xx))
			if(!vis[yy][xx] && vet[yy][xx] != '#')
				dfs(yy, xx);
	}
}

int main(int argc, char * * argv) {
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			scanf(" %c", &vet[i][j]);
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++) {
			if(!vis[i][j] && vet[i][j] != '#') {
				lobo = ovelha = 0;
				dfs(i, j);
				if(lobo >= ovelha)
					w += lobo;
				else
					s += ovelha;
			}
		}
	printf("%d %d\n", s, w);
	return 0;
}
