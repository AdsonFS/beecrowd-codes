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
const int MAX = 2 * 1001;

struct use {
	int from, to, cap, flow, t;
	use(int _from=-1, int _to=-1, int _cap=0, int _flow=0, int _t=0) {
		from = _from; to = _to; t = _t;
		cap = _cap; flow = _flow;
	}
};
 
int source, sink, sum;

vector <int> adj[MAX+1];
vector <use> edg;

int dst[MAX+1];
int ptr[MAX+1];

void addEdge(int u, int v, int c, int f, int t) {
	adj[u].pb(edg.size());
	edg.pb(use(u, v, c, 0, t));
	adj[v].pb(edg.size());
	edg.pb(use(v, u, 0, 0, t));
}

bool bfs(int lim) {
	memset(dst, -1, sizeof dst);
	queue <ii> q;
	dst[source] = 0;
	q.push(ii(source, 0)); 
	while(!q.empty()) {
		int u = q.front().F, d = q.front().S; q.pop();
		if(u == sink) return true;
		rep(i, 0, adj[u].size()) {
			int id = adj[u][i];
			use aux = edg[id];
			if(aux.t > lim) continue;
			if(dst[aux.to]!=-1) continue;
			if(aux.cap-aux.flow > 0) {
				dst[aux.to] = d+1;
				q.push(ii(aux.to, d+1));
			}
		}
	}
	return false;
}

int dfs(int u, int c, int lim) {
	if(u == sink) return c;
	int ret = 0;
	for(; ptr[u] < adj[u].size(); ptr[u]++) {
		int id = adj[u][ptr[u]];
		use aux = edg[id];
		if(aux.t > lim) continue;
		if(dst[aux.to]!=dst[u]+1) continue;
		if(aux.cap-aux.flow>0) {
			ret = dfs(aux.to, min(c, aux.cap-aux.flow), lim);
			if(ret > 0) {
				edg[id].flow+=ret;
				edg[id^1].flow-=ret;
				return ret;
			}
		}
	}
	return ret;
}
 
int maxFlow(int lim) {
	int ret = 0;
	memset(ptr, 0, sizeof ptr);
	for(auto &ed : edg)
	    ed.flow = 0;
	while(bfs(lim)) {
		memset(ptr, 0, sizeof ptr);
		while(1 < 2) {
			int push = dfs(source, 1<<30, lim);
			if(!push) break;
			ret += push;
		}
	}
	return ret;
}

int search(int i, int j) {
    int m = (i+j)/2;
    if(i == j) return m;
    if(maxFlow(m) == sum) return search(i, m);
    else return search(m+1, j);
}

int main(int argc, char ** argv) {
    int N, M, K, x, u, v, t;
    scanf("%d%d%d", &N, &M, &K);
    REP(i, 1, N) {
        scanf("%d", &x);
        addEdge(0, i, x, 0, 0);
        sum += x;
    }
    REP(i, 1, M) {
        scanf("%d", &x);
        addEdge(N+i, MAX, x, 0, 0);
    }
    rep(i, 0, K) {
        scanf("%d%d%d", &u, &v, &t);
        addEdge(u, N+v, 1<<30, 0, t);
    }
    source = 0; sink = MAX;
    if(maxFlow(1e6) != sum) puts("-1");
    else printf("%d\n", search(1, 1e6));
    return 0;
}
