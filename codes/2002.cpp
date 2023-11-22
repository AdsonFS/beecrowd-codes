#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
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
typedef pair<ll, ii> PII;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, 1, -1};
ll dist[MAX][MAX];
ll vet[MAX][MAX];
int n, m;

ll get(ll a) {
	ll a1 = a;
	while((a1 + 1) % 4 != 0)
		a1--;
	if(a - a1 == 0) return 0;
	if(a - a1 == 1) return a;
	if(a - a1 == 2) return 1;
	return a + 1;
}

bool ver(int i, int j) {
	return (i >= 1 && i <= n && j >= 1 && j <= m);
}

ll dijkstra() {
	priority_queue<PII, vector<PII>, greater<PII> > pq;
	memset(dist, INF, sizeof(dist));
	pq.push(PII(0, ii(1, 1)));
	dist[1][1] = 0;
	while(!pq.empty()) {
		int y = pq.top().S.F;
		int x = pq.top().S.S;
		pq.pop();
		rep(k, 0, 4) {
			int yy = y + dy[k];
			int xx = x + dx[k];
			if(ver(yy, xx)) {
				ll b = max(vet[y][x], vet[yy][xx]);
				ll a = min(vet[y][x], vet[yy][xx]);
				ll d = get(b) ^ get(a-1);
				if(dist[yy][xx] > dist[y][x] + d) {
					dist[yy][xx] = dist[y][x] + d;
					pq.push(PII(dist[yy][xx], ii(yy, xx)));
				}
			}
		}
	}
	return dist[n][m];
}

int main(int argc, char** argv) {
	while(scanf("%d%d", &n, &m) != EOF) {
		REP(i, 1, n)
			REP(j, 1, m)
				scanf("%lld", &vet[i][j]);
		printf("%lld\n", dijkstra());
	}
	return 0;
}
