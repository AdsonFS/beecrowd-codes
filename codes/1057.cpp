#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << numl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).num()
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 200010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef unsigned long long int ull;
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};
vector<ii> num;
int N, h;

bool ver(ii a) {
	return (a.F >= 0 && a.F < N && a.S >= 0 && a.S < N);
}

struct game {
	char m[10][10];
	ii a, b, c;
	bool ok() {
		int ans = 0;
		rep(i, 0, 3)
			if(a == num[i] || b == num[i] || c == num[i]) ans++;
		return ans == 3;
	}

	bool mover(ii &p, ii pp) {
		if(ver(pp) && m[pp.F][pp.S] == '.') {
			m[pp.F][pp.S] = 'A';
			m[p.F][p.S] = '.';
			p = pp;
			return true;
		}
		return false;
	}

	void move(int k) {
		bool A, B, C;
		A = B = C = false;
		ii aa = mk(a.F + dy[k], a.S + dx[k]);
		ii bb = mk(b.F + dy[k], b.S + dx[k]);
		ii cc = mk(c.F + dy[k], c.S + dx[k]);
		A = mover(a, aa); B = mover(b, bb); C = mover(c, cc);
		if(!A) mover(a, aa); if(!B) mover(b, bb); if(!C) mover(c, cc);
		if(!A) mover(a, aa); if(!B) mover(b, bb); if(!C) mover(c, cc);
	}

	bool operator < (game g) const {
		rep(i, 0, N)
			rep(j, 0, N)
				if(m[i][j] != g.m[i][j]) return m[i][j] < g.m[i][j];
		return false;
	}
};

void printar(game g) {
	cout << endl;
	rep(i, 0, N) cout << g.m[i] << endl;
	cout << endl;
}

typedef pair<game, int> pgi;
int solve(game g) {
	map<game, bool> vis;
	queue<pgi> q;
	vis[g] = true;
	q.push(mk(g, 0));
	while(!q.empty()) {
		game u = q.front().F;
		int d = q.front().S;
		// printar(u);
		if(u.ok()) return d;
		rep(k, 0, 4) {
			game v = u;
			v.move(k);	
			if(!vis[v]) {
				vis[v] = true;
				q.push(mk(v, d+1));
			}
		}
		// system("pause");
		q.pop();
	}
	return 0;
}

int main(int argc, char ** argv) {
	game g;
	scanf("%d", &N);
	while(scanf("%d", &N) != EOF) {
		num.clear();
		rep(i, 0, N) {
			rep(j, 0, N) {
				scanf(" %c", &g.m[i][j]);
				if(g.m[i][j] == 'A') g.m[i][j] = 'A', g.a = mk(i, j);
				else if(g.m[i][j] == 'B') g.m[i][j] = 'A', g.b = mk(i, j);
				else if(g.m[i][j] == 'C') g.m[i][j] = 'A', g.c = mk(i, j);
				if(g.m[i][j] == 'X') g.m[i][j] = '.', num.pb(mk(i, j));
			}
			g.m[i][N] = '\0';
		}
		int ans = solve(g);
		if(ans) printf("Case %d: %d\n", ++h, ans);
		else printf("Case %d: trapped\n", ++h);
	}
	return 0;
}


