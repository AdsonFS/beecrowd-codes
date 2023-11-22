#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef pair<double, int> di;
typedef unsigned long long int ull;
vector<int> adj[MAX];
int dist[MAX];
int vet[1001];

int bfs(int s, int e) {
	SET(dist, INF);
	dist[s] = 0;
	queue<int> q;
	q.push(s);
	while(!q.empty()) {
		int u = q.front();
		q.pop();
		int tam = adj[u].size();
		rep(i, 0, tam) {
			int v = adj[u][i];
			int cost = dist[u] + 1;
			if(dist[v] > cost) {
				dist[v] = cost;
				q.push(v);
			}
		}
	}
	return dist[e];
}

int main(int argc, char** argv) {
	int n, m, l;
	scanf("%d%d", &n, &m);
	rep(k, 0, m) {
		scanf("%d", &l);
		rep(j, 0, l)
			scanf("%d", &vet[j]);
		rep(i, 0, l) 
			rep(j, i+1, l) {
				adj[vet[i]].pb(vet[j]);
				adj[vet[j]].pb(vet[i]);
			}
	}
	printf("%d\n", bfs(1, n));
	return 0;
}
