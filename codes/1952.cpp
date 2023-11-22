#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = "<< x << endl;
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
typedef pair<int, pair<ii, int> > ppi;
int dz[] = {0, 0, 0, 0, 0, 0, 0, 0, 2, 1, -1, -2, -2, -1, 1, 2, 1, 2, 2, 1, -1, -2, -2, -1};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 1, -1, -2, -2, -1, 1, 2};
int dx[] = {2, 1, -1, -2, -2, -1, 1, 2, 1, 2, 2, 1, -1, -2, -2, -1, 0, 0, 0, 0, 0, 0, 0, 0};
int dist[MAX][MAX][MAX];
int n, m, l;

struct ponto {
	int y, x, z;
};

bool ver(int y, int x, int z) {
	return (y >= 1 && y <= n && x >= 1 && x <= m && z >= 1 && z <= l);
}

void dijkstra(int y, int x, int z) {
	ponto pp;
	queue<ponto> pq;
	memset(dist, INF, sizeof(dist));
	pp.y = y; pp.x = x; pp.z = z;
	dist[y][x][z] = 0;
	pq.push(pp);
	while(!pq.empty()) {
		y = pq.front().y;
		x = pq.front().x;
		z = pq.front().z;
		pq.pop();
		rep(k, 0, 24) {
			int yy = y + dy[k];
			int xx = x + dx[k];
			int zz = z + dz[k];
			if(ver(yy, xx, zz)) {
				if(dist[yy][xx][zz] > dist[y][x][z] + 1) {
					dist[yy][xx][zz] = dist[y][x][z] + 1;
					pp.y = yy; pp.x = xx; pp.z = zz;
					pq.push(pp);
				}
			}
		}
	}
}

int main(int argc, char** argv) {
	int i, j, k;
	scanf("%d%d%d", &n, &m, &l);
	scanf("%d%d%d", &i, &j, &k);
	dijkstra(i, j, k);
	scanf("%d%d%d", &i, &j, &k);
	printf("%d\n", dist[i][j][k]);
	return 0;
}
