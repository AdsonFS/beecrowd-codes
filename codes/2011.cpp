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
typedef pair<ll, ll> pl;
typedef pair<int, int> ii;
typedef pair<double, int> pdi;
const int MAX = 1e4+4;
vector<ii> adj[MAX];
int a[MAX], t[MAX];
int N, M, u, v;
double d[MAX];

double dijkstra(double m) {
	priority_queue<pdi, vector<pdi>, greater<pdi> > pq;
	REP(i, 1, N) d[i] = (1LL << 60);
	pq.push(mk(0.0, 1));
	d[1] = 0.0;
	while(!pq.empty()) {
		u = pq.top().S;
		pq.pop();
		rep(i, 0, adj[u].size()) {
			int v = adj[u][i].F;
			int j = adj[u][i].S;
			double c = a[j]*m + t[j];
			if(d[v] > d[u] + c) {
				d[v] = d[u] + c;
				pq.push(mk(d[v], v));
			}
		}
	}
	return d[N];
}

double search(double i, double j, int k = 150) {
	double m = (i+j)/2.0;
	double me = (i+m)/2.0;
	double md = (j+m)/2.0;
	double calcE = dijkstra(me);
	double calcD = dijkstra(md);
	if(!k) return (calcE+calcD)/2.0;
	if(calcE > calcD) return search(i, md, k-1);
	return search(me, j, k-1);
}

int main(int argc, char ** argv) {
	scanf("%d%d", &N, &M);
	rep(i, 0, M) {
		scanf("%d%d%d%d", &u, &v, &a[i], &t[i]);
		adj[u].pb(mk(v, i)); adj[v].pb(mk(u, i));
	}
	printf("%.5lf\n", search(0, 24*60));
	return 0;
}
