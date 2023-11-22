#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef unsigned long long int ull;
int s[MAX], r[MAX], g[MAX];
vector<int> adj[MAX];
int N, M, S, a, b;

bool solve() {
	int cnt = 0;
	priority_queue<ii, vector<ii>, greater<ii> > pq;
	REP(i, 1, N) if(!g[i]) pq.push(mk(s[i], i));
	while(!pq.empty()) {
		int u = pq.top().S;
		if(S > s[u]) S += r[u];
		else return false;
		pq.pop();
		int t = adj[u].size();
		rep(i, 0, t) {
			int v = adj[u][i];
			if(--g[v] == 0) pq.push(mk(s[v], v));
		}
		cnt++;
	}
	return cnt == N;
}

int main(int argc, char** argv) {
	while(scanf("%d%d%d", &N, &M, &S) && N+M+S) {
		REP(i, 0, N) adj[i].clear(), g[i] = 0;
		REP(i, 1, N) scanf("%d", &s[i]);
		REP(i, 1, N) scanf("%d", &r[i]);
		rep(i, 0, M) {
			scanf("%d%d", &a, &b);
			adj[a].pb(b);
			g[b]++;
		}
		if(solve()) puts("possivel");
		else puts("impossivel");
	}
	return 0;
}



