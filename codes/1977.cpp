#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10005
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int dist[12];

int dijkstra(int s, int e, vector<ii> adj[]) {
	memset(dist, INF, sizeof(dist));
	priority_queue< ii, vector<ii>, greater<ii> > pq;
	dist[s] = 0;
	pq.push(mk(0, s));
	while(!pq.empty()) {
		int v = pq.top().S;
		int tam = adj[v].size();
		pq.pop();
		for(int i = 0; i < tam; i++) {
			int u = adj[v][i].F;
			int cost = adj[v][i].S;
			if(dist[u] > dist[v] + cost) {
				dist[u] = dist[v] + cost;
				pq.push(mk(dist[u], u));
			}
		}
	}
	return dist[e];
}

void printar(int h, int m) {
	printf("%d:", h);
	if(m < 10) printf("0");
	printf("%d\n", m);
}

int main(int argc, char** argv) {
	int hs, h;
	string x1, x2;
	map<string, int> mapa;
	int x, n, m, c, v1, v2, p = 1;
	while(scanf("%d%d%d", &x, &m, &n) && (x+n+m)) {
		hs = (17 * 60);
		if(x <= 30) hs += 30;
		else hs += 50;
		vector<ii> adj[12];
		for(int i = 0; i < m; i++) {
			cin >> x1 >> x2 >> c;
			if(mapa[x1] == 0)
				mapa[x1] = p++;
			if(mapa[x2] == 0)
				mapa[x2] = p++;
			v1 = mapa[x1];
			v2 = mapa[x2];
			adj[v1].pb(mk(v2, c));
		}
		hs += dijkstra(mapa["varzea"], mapa["alto"], adj);
		h = hs / 60;
		hs -= (h * 60);
		printar(h, hs);
		if(h > 18 || (h == 18 && hs > 0)) printf("Ira se atrasar\n");
		else printf("Nao ira se atrasar\n");
	}
	return 0;
}