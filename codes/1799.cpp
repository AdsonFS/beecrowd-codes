#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 6010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
vector<int> adj[MAX]; 
int dist[MAX];

void dijkstra(int s) {
	memset(dist, INF, sizeof(dist));
	priority_queue<ii, vector<ii>, greater<ii> > pq;
	dist[s] = 0;
	pq.push(mk(0, s));
	while(!pq.empty()) {
		int v = pq.top().S;
		int t = adj[v].size();
		pq.pop();
		for(int i = 0; i < t; i++) {
			int u = adj[v][i];
			if(dist[u] > dist[v] + 1) {
				dist[u] = dist[v] + 1;
				pq.push(mk(dist[u], u));
			}
		}
	}
}

int main(int argc, char * * argv) {
	int n, m, s, q, e, x1, x2;
	int p = 1;
	string v1, v2;
	scanf("%d%d", &n, &m);
	map<string, int> mapa;
	for(int i = 0; i < m; i++) {
		cin >> v1 >> v2;
		if(mapa[v1] == 0) mapa[v1] = p++;
		if(mapa[v2] == 0) mapa[v2] = p++;
		x1 = mapa[v1];
		x2 = mapa[v2];
		adj[x1].pb(x2);
		adj[x2].pb(x1);
	}
	s = mapa["Entrada"];
	q = mapa["*"];
	e = mapa["Saida"];
	dijkstra(q);
	printf("%d\n", dist[s] + dist[e]);
	return 0;
}

