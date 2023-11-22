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
int vet[MAX][MAX];
int dist[MAX][MAX];
int n, m, t, ans;
int dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};

int ver(int i, int j) {
	return (i >= 1 && i <= n && j >= 1 && j <= m);
}

int dijkstra(int y, int x) {
	memset(dist, INF, sizeof(dist));
	queue<ii> pq;
	dist[y][x] = 0;
	pq.push(mk(y, x));
	while(!pq.empty()) {
		y = pq.front().F;
		x = pq.front().S;
		pq.pop();
		for(int k = 0; k < 8; k++) {
			int yy = y + dy[k];
			int xx = x + dx[k];
			if(ver(yy, xx)) {
				if(vet[yy][xx] == 1) {
					if(dist[yy][xx] > dist[y][x] + 1) {
						dist[yy][xx] = dist[y][x] + 1;
						ans = max(ans, dist[yy][xx]);
						pq.push(mk(yy, xx));
					}
				}
			}
		}
	}
	return ans;
}

int main(int argc, char * * argv ) {
	int x, y;
	scanf("%d", & t);
	while(t--) {
		scanf("%d%d", & n, & m);
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++)
				scanf("%d", & vet[i][j]);
		//
		ans = -1;
		scanf("%d%d", &y, &x);
		printf("%d\n", dijkstra(y , x));
	}
	return 0;
}

