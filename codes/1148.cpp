#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 502
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int dist[MAX];

void dijkstra(int s, vector<ii> adj[MAX]) {
	memset(dist, INF, sizeof(dist));
	priority_queue< ii, vector<ii>, greater<ii> > pq;
	dist[s] = 0;
	pq.push(mk(0, s));
	while(!pq.empty()) {
		int v = pq.top().S;
		int t = adj[v].size();
		pq.pop();
		for(int i = 0; i < t; i++) {
			int u = adj[v][i].F;
			int cost = adj[v][i].S;
			if(dist[u] > cost + dist[v]) {
				dist[u] = cost + dist[v];
				pq.push(mk(dist[u], u));
			}
		}
	}
}

int main(int argc, char * * argv) {
	int n, m, q, v1, v2, c;
	while(scanf("%d%d", & n, & m) && (n + m) != 0) {
		vector<ii> adj[MAX];
		for(int i = 0; i < m; i++) {
			scanf("%d%d%d", & v1, & v2, & c);
			int t = adj[v2].size();
			bool f = false;
			for(int i = 0; i < t; i++) {
				if(adj[v2][i].F == v1)  {
					f = true;
					adj[v1].pb(mk(v2, 0));
					adj[v2][i].S = 0;
				}
			}
			if(!f)
				adj[v1].pb(mk(v2, c));
		}
		scanf("%d", & q);
		for(int i = 0; i < q; i++) {
			scanf("%d%d", &v1, &v2);
			dijkstra(v1, adj);
			if(dist[v2] == INF)
				printf("Nao e possivel entregar a carta\n");
			else
				printf("%d\n", dist[v2]);
		}
		printf("\n");
	}
	return 0;
}
