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
int mat[2][4];

struct game {
	int m[2][4];
	bool operator < (game g) const {
		rep(i, 0, 2) rep(j, 0, 4)
			if(m[i][j] != g.m[i][j])
				return m[i][j] < g.m[i][j];
		return false;
	}
	bool ver() {
		rep(i, 0, 2) rep(j, 0, 4)
			if(m[i][j] != mat[i][j])
				return false;
		return true;
	}
};

typedef pair<ll, game> pig;
ll dijkstra(game g) {
	map<game, ll> mp;
	priority_queue<pig, vector<pig>, greater<pig> > pq;
	pq.push(mk(0, g));
	mp[g] = 0;
	while(!pq.empty()) {
		game u = pq.top().S;
		ll d = pq.top().F;
		if(u.ver()) return d;
		pq.pop();
		rep(i, 0, 4) {
			game v = u;
			swap(v.m[0][i], v.m[1][i]);
			if(!mp.count(v) || mp[v] > mp[u] + v.m[0][i] + v.m[1][i]) {
				mp[v] = mp[u] + v.m[0][i] + v.m[1][i];
				pq.push(mk(mp[v], v));
			}
		}
		rep(i, 0, 3) {
			game v = u;
			swap(v.m[0][i], v.m[0][i+1]);
			if(!mp.count(v) || mp[v] > mp[u] + v.m[0][i] + v.m[0][i+1]) {
				mp[v] = mp[u] + v.m[0][i] + v.m[0][i+1];
				pq.push(mk(mp[v], v));
			}
		}
		rep(i, 0, 3) {
			game v = u;
			swap(v.m[1][i], v.m[1][i+1]);
			if(!mp.count(v) || mp[v] > mp[u] + v.m[1][i] + v.m[1][i+1]) {
				mp[v] = mp[u] + v.m[1][i] + v.m[1][i+1];
				pq.push(mk(mp[v], v));
			}
		}
	}
	return -1;
}

int main(int argc, char** argv) {
	game g;
	rep(i, 0, 2) rep(j, 0, 4) scanf("%d", &g.m[i][j]);
	rep(i, 0, 2) rep(j, 0, 4) scanf("%d", &mat[i][j]);
	printf("%lld\n", dijkstra(g));
	return 0;
}
