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
#define MAX 1010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
vector<int> adj[MAX];
int g[MAX];
int n, ans;

int bfs() {	
	ans = 0;
	int aux1, aux2;
	queue<int> pq;
	REP(i, 1, n) if(!g[i]) pq.push(i);
	aux1 = pq.size();
	while(!pq.empty()) {
		ans++;
		aux2 = 0;
		rep(k, 0, aux1) {
			int u = pq.front();
			pq.pop();
			int tam = adj[u].size();
			rep(i, 0, tam) {
				int v = adj[u][i];
				g[v]--;
				if(!g[v]) {
					pq.push(v);
					aux2++;
				}
			}
		}
		aux1 = aux2;
	}
	return ans;
}

int main(int argc, char** argv) {
	int m, v;
	while(scanf("%d", &n) != EOF) {
		REP(i, 1, n) {
			scanf("%d", &m);
			while(m--) {
				scanf("%d", &v);		// indice i depende de v
				adj[v].pb(i);
				g[i]++;
			}
		}
		bfs();
		bool ok = true;
		REP(i, 1, n) if(g[i]) { ok = false; break; }
		printf("%d\n", ok ? ans : -1);
		REP(i, 0, n) {
			adj[i].clear();
			g[i] = 0;
		}
	}
	return 0;
}
