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
const int MAX = 1e3+3;
int s[MAX], low[MAX];
vector<int> adj[MAX];
vector<int> E[MAX];
int cnt_cicle;
int cnt, ssc;

void dfs_1(int u) {
	bool cicle = true;
	s[u] = low[u] = ++cnt;
	rep(i, 0, (int)adj[u].size()) {
		int v = adj[u][i];
		if(!s[v]) {
			dfs_1(v);
			low[u] = min(low[u], low[v]);
			if(low[v] > s[u]) cicle = 0;
		}
		else
			low[u] = min(low[u], s[v]);
	}
	cnt_cicle += cicle;
	ssc++;
}

void dfs_2(int u, int p) {
	int parent = 1;
	bool cicle = true;
	s[u] = low[u] = ++cnt;
	rep(i, 0, (int)E[u].size()) {
		int v = E[u][i];
		if(v == p && parent) parent--;
		else if(!s[v]) {
			dfs_2(v, u);
			low[u] = min(low[u], low[v]);
			if(low[v] > s[u]) cicle = 0;
		}
		else
			low[u] = min(low[u], s[v]);
	}
	cnt_cicle += cicle;
	ssc++;
}

int main(int argc, char ** argv) {
	int N, M, op, u, v;
	bool oo = false;
	while(scanf("%d%d", &N, &M) != EOF) {
		rep(i, 0, M) {
			scanf("%d%d%d", &u, &v, &op);
			if(!i || u == v) continue;
			adj[u].pb(v);
			if(op-1) adj[v].pb(u);
			E[u].pb(v); E[v].pb(u);
			if(op-1) E[u].pb(v);
			if(op-1) E[v].pb(u);
		}
		dfs_1(1);
		if(cnt_cicle == N) puts("-");
		else {
			REP(i, 1, N) s[i] = low[i] = 0;
			cnt_cicle = cnt = ssc = 0;
			dfs_2(1, 1);
			if(ssc != N) puts("*");
			else if(cnt_cicle != N) puts("2");
			else puts("1");
		}
		REP(i, 1, N) s[i] = low[i] = 0;
		REP(i, 1, N) adj[i].clear();
		REP(i, 1, N) E[i].clear();
		cnt_cicle = cnt = ssc = 0;
	}
	return 0;
}
