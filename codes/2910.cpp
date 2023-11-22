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
typedef unsigned long long int ull;
typedef pair<ull, int> ii;
typedef long long ll;
vector<ii> adj[MAX];
int pd1[MAX][MAX];
int pd[MAX][MAX];
ull dist[MAX];
ull cost[MAX];
int pai[MAX];
int p[MAX];

void dijkstra() {
	memset(dist, INF, sizeof(dist));
	memset(cost, INF, sizeof(cost));
	priority_queue<ii, vector<ii>, greater<ii> > pq;
	dist[1] = 0;
	cost[1] = 0;
	pai[1] = -1;
	pq.push(mk(0, 1));
	while(!pq.empty()) {
		int u = pq.top().S;
		int tam = adj[u].size();
		rep(i, 0, tam) {
			int v = adj[u][i].F;
			ull custo = adj[u][i].S;
			if(dist[v] > dist[u] + custo) {
				cost[v] = cost[u] + pd[u][v];
				dist[v] = dist[u] + custo;
				pq.push(mk(dist[v], v));
				pai[v] = u;
			}
			else if(dist[v] != dist[u] + custo) continue;
			ull d = cost[v] - cost[pai[v]];
			if((ull)pd[u][v] < d) {
				cost[v] = cost[u] + pd[u][v];
				dist[v] = dist[u] + custo;
				pq.push(mk(dist[v], v));
				pai[v] = u;
			}
			
		}
		pq.pop();
	}
}

int find(int a) {
	if(p[a] == a) return a;
	return p[a] = find(p[a]);
}

int main(int argc, char** argv) {
	int n, m;
	ull ans = 0;
	int u, v, l, c;
	scanf("%d%d", &n, &m);
	REP(i, 0, n) p[i] = i;
	rep(i, 0, m) {
		scanf("%d%d%d%d", &u, &v, &l, &c);
		adj[u].pb(mk(v, l));
		adj[v].pb(mk(u, l));
		
		if(!pd1[u][v]) {
			pd[u][v] = pd[v][u] = c;
			pd1[u][v] = pd1[v][u] = l;
		}
		else if(l < pd1[u][v]){
			pd[u][v] = pd[v][u] = c;
			pd1[u][v] = pd1[v][u] = l;
		}
		else if(l == pd1[u][v])
			pd[u][v] = pd[v][u] = min(pd[u][v], c);
	}
	dijkstra();
	REP(i, 2, n) {
		int aux = i;
		while(pai[aux] != -1) {
			int A = aux;
			int B = pai[aux];
			int a = find(A);
			int b = find(B);
			if(a != b) {
				ans += pd[A][B];
				p[a] = b;
			}
			else break;
			aux = pai[aux];
		}
	}
	cout << ans << "\n";
	return 0;
}

