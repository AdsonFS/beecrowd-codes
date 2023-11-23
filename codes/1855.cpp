#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 110
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int dx[] = {0, 0, -1, 1};
int dy[] = {-1, 1, 0, 0};
string dir = "^v<>.";
char vet[MAX][MAX];
bool vis[MAX][MAX];
int n, m;
bool ok;

void dfs(int i, int j, int d) {
	if(vet[i][j] == '#' || vis[i][j]) return;
	if(vet[i][j] == '*') {
		ok = true;
		return;
	}
	vis[i][j] = true;
	if(vet[i][j] != '.')
		d = dir.find(vet[i][j]);
	dfs(i + dy[d], j + dx[d], d);
}

int main(int argc, char** argv) {
	scanf("%d%d", &m, &n);
	memset(vet, '#', sizeof(vet));
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			scanf(" %c", &vet[i][j]);
	dfs(1, 1, dir.find(vet[1][1]));
	if(ok) printf("*\n");
	else printf("!\n");
	return 0;
}
