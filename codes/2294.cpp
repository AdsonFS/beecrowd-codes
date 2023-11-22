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
#define MAX 1050
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int dy[] = { -1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};
int dist[15][15];
int vet[15][15];
int n, m, ix, iy;

void dijkstra() {
	memset(dist, INF, sizeof(dist));
	priority_queue< pii, vector<pii>, greater<pii> >pq;
	dist[iy][ix] = 0;
	pq.push(mk(0, mk(iy, ix)));
	while(!pq.empty()) {
		int y = pq.top().S.F;
		int x = pq.top().S.S;
		pq.pop();
		for(int k = 0; k < 4; k++) {
			if(vet[y + dy[k]][x + dx[k]] != 2) {
				if(dist[y + dy[k]][x + dx[k]] > dist[y][x] + 1) {
					dist[y + dy[k]][x + dx[k]] = dist[y][x] + 1;
					pq.push(mk(dist[y + dy[k]][x + dx[k]], mk(y + dy[k], x + dx[k])));
				}
			}
		}
	}
}

int main(int argc, char * * argv) {
	vector<ii> saida;
	scanf("%d%d", &n, &m);
	for(int i = 0; i <= n + 1; i++) {
		for(int j = 0; j <= n + 1; j++)
			vet[i][j] = 2;
	}
	
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			scanf("%d", & vet[i][j]);
			if(vet[i][j] == 3) {
				iy = i;
				ix = j;
			}
			if(vet[i][j] == 0) saida.pb(mk(i, j));
		}
	}
	int ans = INF;
	dijkstra();
	int tam = saida.size();
	for(int i = 0; i < tam; i++)
		ans = min(ans, dist[saida[i].F][saida[i].S]);
	printf("%d\n", ans);
	return 0;
}