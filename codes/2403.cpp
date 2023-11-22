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
#define MAX 50010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
vector<int> adj[MAX];
vector<int> ans;
int g[MAX];						// grau
int n, m;

void bfs() {
	priority_queue<int, vector<int>, greater<int> > pq;
	rep(i, 0, n) if(!g[i]) pq.push(i);
	while(!pq.empty()) {
		int u = pq.top();
		ans.pb(u);
		pq.pop();
		int tam = adj[u].size();
		rep(i, 0, tam) {
			int v = adj[u][i];
			g[v]--;
			if(!g[v]) pq.push(v);
		}
	}
}

int main(int argc, char** argv) {
	int v1, v2;
	scanf("%d%d", &n, &m);
	rep(i, 0, m) {
		scanf("%d%d", &v1, &v2);		// v1 precisa ir antes
		adj[v1].pb(v2);
		g[v2]++;
	}
	bfs();
	int tam = ans.size();
	if(tam == n) {
		rep(i, 0, n) printf("%d\n", ans[i]);
	}
	else puts("*");
	return 0;
}
