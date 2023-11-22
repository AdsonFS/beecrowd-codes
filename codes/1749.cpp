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
const int MAX = 5e4+4;
vector<int> adj[MAX];
int vis[MAX], a[2];
map<ii, int> mp;
vector<ii> num;

void dfs(int u, int h) {
	vis[u] = 1;
	a[(h&1)]++;
	rep(i, 0, adj[u].size())
		if(!vis[adj[u][i]])
			dfs(adj[u][i], h+1);
}

int main(int argc, char * * argv) {
	int ans = 0;
	int N, x, y;
	scanf("%d", &N);
	rep(i, 0, N) {
		scanf("%d%d", &x, &y);
		mp[mk(x, y)] = i;
		num.pb(mk(x, y));
	}
	rep(k, 0, N) {
		x = num[k].F;
		y = num[k].S;	
		REP(i, -5, 5) REP(j, -5, 5) {
			int xx = x + i;
			int yy = y + j;
			if((x-xx)*(x-xx)+(y-yy)*(y-yy) <= 25 && mp.count(mk(xx, yy)))
				adj[k].pb(mp[mk(xx, yy)]);
		}
	}
	rep(i, 0, N) {
		a[0] = a[1] = 0;
		if(!vis[i]) dfs(i, 0);
		ans += max(a[0], a[1]);
	}
	printf("%d\n", N-ans);
	return 0;
}
