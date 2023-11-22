#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
const int MAX = 505;
vector<pii> adj[MAX];
int cap[MAX][MAX];
int dist[2][MAX];
vector<pii> num;
int N, M;

void dijkstra(int s, int id) {
	rep(i, 0, N) dist[id][i] = (1 << 30);
	priority_queue<ii, vector<ii>, greater<ii> > pq;
	pq.push(mk(0, s));
	dist[id][s] = 0;
	while(!pq.empty()) {
		int u = pq.top().S;
		pq.pop();
		rep(i, 0, adj[u].size()) {
			int v = adj[u][i].F;
			int c = adj[u][i].S.F;
			if(adj[u][i].S.S != id) continue;
			if(dist[id][v] > dist[id][u] + c && !cap[u][v]) {
				dist[id][v] = dist[id][u] + c;
				pq.push(mk(dist[id][v], v));
			}
		}
	}
}

int main(int argc, char** argv) {
	int a, b, c, s, e;
	while(scanf("%d%d", &N, &M) && N+M) {
		scanf("%d%d", &s, &e);
		rep(i, 0, M) {
			scanf("%d%d%d", &a, &b, &c);
			adj[a].pb(mk(b, mk(c, 0)));
			adj[b].pb(mk(a, mk(c, 1)));
			num.pb(mk(c, mk(a, b)));
		}
		dijkstra(s, 0); dijkstra(e, 1);
		rep(i, 0, M) {
			a = num[i].S.F; b = num[i].S.S;
			if(dist[0][a] + num[i].F + dist[1][b] == dist[0][e])
				cap[a][b] = cap[b][a] = 1;
			if(dist[0][b] + num[i].F + dist[1][a] == dist[0][e])
				cap[a][b] = cap[b][a] = 1;
		}
		dijkstra(s, 0);
			if(dist[0][e] == (1 << 30)) puts("-1");
		else printf("%d\n", dist[0][e]);
		rep(i, 0, N) {
			adj[i].clear();
			rep(j, 0, N) cap[i][j] = 0;
		}
		num.clear();
	}
	return 0;
}
