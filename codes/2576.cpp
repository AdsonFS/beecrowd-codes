#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define pf push_front
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
vector<ii> adj[MAX];
int dist[MAX];

int dijkstra(int s, int e) {
	memset(dist, INF, sizeof(dist));
	priority_queue<ii, vector<ii>, greater<ii> > pq;
	pq.push(mk(0, s));
	dist[s] = 0;
	while(!pq.empty()) {
		int u = pq.top().S;
		int tam = adj[u].size();
		pq.pop();
		for(int i = 0; i < tam; i++) {
			int v = adj[u][i].F;
			int cost = adj[u][i].S;
			if(dist[v] > dist[u] + cost) {
				dist[v] = dist[u] + cost;
				pq.push(mk(dist[v], v));
			}
		}
	}
	return dist[e];
}

int main(int argc, char** argv) {
	int n, m, a, b, u, v; 
	scanf("%d%d%d%d", &n, &m, &a, &b);
	while(m--) {
		scanf("%d%d", &u, &v);
		adj[u].pb(mk(v, 0));
		adj[v].pb(mk(u, 1));
	}
	int bibi = dijkstra(a, b);
	int bibika = dijkstra(b, a);
	if(bibi < bibika) printf("Bibi: %d\n", bibi);
	else if(bibi > bibika) printf("Bibika: %d\n", bibika);
	else printf("Bibibibika\n");
	return 0;
}


