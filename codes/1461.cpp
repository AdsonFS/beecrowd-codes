#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
const int INF = 0x3f3f3f3f;
const int mod = 1e9+7;
const int MAX = 1e2+2;
int dy[] = {1, -1, 0, 0};
int dx[] = {0, 0, -1, 1};
int N, m[MAX][MAX];
int pd[MAX][MAX];
int d[MAX][MAX];

bool check(int i, int j) {
	if(i < 1 || i > N || j < 1 || j > N) return false;
	return (j <= N-i+1);
}

int solve(int aux) {
	int ans = 0;
	for(int i = 1, j = N; i <= N; i++, j--)
		if(d[i][j] == aux) ans = (ans + pd[i][j]) % mod;
	return ans;
}

int dijkstra() {
	priority_queue<pii, vector<pii>, greater<pii> > pq;
	memset(d, INF, sizeof d);
	memset(pd, 0, sizeof pd);
	pq.push(mk(0, mk(1, 1)));
	int aux = (1 << 30);
	d[1][1] = m[1][1];
	pd[1][1] = 1;
	while(!pq.empty()) {
		int y = pq.top().S.F;
		int x = pq.top().S.S;
		if(y+x == N+1) aux = min(aux, d[y][x]);
		rep(k, 0, 4) {
			int yy = y + dy[k];
			int xx = x + dx[k];
			if(!check(yy, xx)) continue;
			if(d[yy][xx] > d[y][x] + m[yy][xx]) {
				d[yy][xx] = d[y][x] + m[yy][xx];
				pq.push(mk(d[yy][xx], mk(yy, xx)));
				pd[yy][xx] = pd[y][x];
			}
			else if(d[yy][xx] == d[y][x] + m[yy][xx]) 
				pd[yy][xx] = (pd[yy][xx] + pd[y][x]) % mod;
		}
		pq.pop();
	}
	return solve(aux);
}

int main(int argc, char ** argv) {
	while(scanf("%d", &N) && N) {
		REP(i, 1, N) REP(j, 1, N)
			scanf("%d", &m[i][j]);
		REP(i, 1, N) REP(j, 1, N-i)
			m[i][j] += m[N-j+1][N-i+1];
		printf("%d\n", dijkstra());
	}
	return 0;
}
