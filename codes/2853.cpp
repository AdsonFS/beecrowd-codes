#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};
int dist[4][MAX][MAX];
char vet[MAX][MAX];
int n, m, ans;

void dfs(int y, int x) {
	for(int k = 0; k < 4; k++)
		dist[k][y][x] = 0;
	queue<pii> fila;
	for(int k = 0; k < 4; k++) {
		if(vet[y + dy[k]][x + dx[k]] != '@') {
			if(dist[k][y + dy[k]][x + dx[k]] > dist[k][y][x] + 1) {
				dist[k][y + dy[k]][x + dx[k]] = dist[k][y][x] + 1;
				fila.push(mk(k, mk(y + dy[k], x + dx[k])));
			} else
				fila.push(mk(k, mk(y + dy[k], x + dx[k])));
		}
	}
	while(!fila.empty()) {
		int y = fila.front().S.F;
		int x = fila.front().S.S;
		int k = fila.front().F;
		fila.pop();
		if(vet[y + dy[k]][x + dx[k]] != '@') {
			if(dist[k][y + dy[k]][x + dx[k]] > dist[k][y][x] + 1) {
				dist[k][y + dy[k]][x + dx[k]] = dist[k][y][x] + 1;
				fila.push(mk(k, mk(y + dy[k], x + dx[k])));
			} else
				fila.push(mk(k, mk(y + dy[k], x + dx[k])));
		}
	}
}

int main(int argc, char * * argv) {
	memset(dist, INF, sizeof(dist));
	for(int i = 0; i < MAX; i++) {
		for(int j = 0; j < MAX; j++)
			vet[i][j] = '@';
	}
	scanf("%d%d", & n, & m);
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++)
			cin >> vet[i][j];
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++)
			if(vet[i][j] == '@')
				dfs(i, j);
	}
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			int d = INF;
			for(int k = 0; k < 4; k++)
				d = min(d, dist[k][i][j]);
			ans = max(ans, d);
		}
	}
	if(ans == INF) printf("-1\n");
	else printf("%d\n", ans);
	return 0;
}
