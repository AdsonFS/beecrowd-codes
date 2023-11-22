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
const ll INF = (1LL << 63) - 1LL;
const int MAXZ = 110;
const int MAXB = 10;
int m[MAXB][MAXZ];
int a[MAXB][MAXZ];
int p[MAXB][MAXZ];
int B, Z;

ll gcd(ll A, ll B, ll &X, ll &Y) {
	if(B == 0) {
		X = 1; Y = 0;
		return A;
	}
	ll x1, y1;
	ll G = gcd(B, A % B, x1, y1);
	X = y1; Y = x1 - (A / B) * y1;
	return G;
}

pair<ll, ll> solve(ll A, ll B, ll Z1, ll Z2) {
	if(Z2 > Z1) swap(A, B), swap(Z1, Z2);
	ll X, Y, ans = 0, G = gcd(A, B, X, Y), C = Z2-Z1;
	if(C%G) return mk(-1LL, -1LL);
	C /= G; X *= C; Y *= C;
	if(X >= 0) {
		ll K = (X * G) / B;
		ans = A * (X - K * (B / G)) + Z1;
	} else {
		ll K = (-X * G + B - 1) / B;
		ans = A * (X + K * (B / G)) + Z1;
	}
	return mk(A * (B / G), ans);
}

bool check(ll A, ll P, ll V) {
	return (V >= P && (V-P)%A == 0);
}

ll solveZooJ(int j) {
	int cnt = 0;
	pair<ll, ll> eq = mk(1LL, 0LL);
	rep(i, 0, B) {
		if(a[i][j] == -1) { cnt++; continue; }
		eq = solve(eq.F, a[i][j], eq.S, p[i][j]);
		if(eq == mk(-1LL, -1LL)) return INF; 
	}
	if(cnt == B) return INF;
	rep(i, 0, B) if(a[i][j] == -1)
		if(!check(eq.F, eq.S, p[i][j])) return INF;
	return eq.S;
}

void pre_dfs(int u, int zoo, int t) {
	if(p[u][zoo] == -1)
		p[u][zoo] = t;
	else if(a[u][zoo] == -1)
		a[u][zoo] = t-p[u][zoo];
	else return;
	pre_dfs(u, m[u][zoo], t + 1);
}

int main(int argc, char** argv) {
	ll ans = INF, ind;
	memset(p, -1, sizeof p);
	memset(a, -1, sizeof a);
	scanf("%d%d", &B, &Z);
	rep(i, 0, B) REP(j, 0, Z)
		scanf("%d", &m[i][j]);
	rep(i, 0, B) pre_dfs(i, m[i][0], 0);
	REP(j, 1, Z) {
		bool ok = false;
		rep(i, 1, B)
			ok |= (p[i][j] != p[i-1][j]);
		if(!ok && p[0][j] != -1 && p[0][j] < ans)
			ans = min(ans, 0LL + p[0][j]), ind = j;
	}
	REP(j, 1, Z) {
		ll ret = solveZooJ(j);
		if(ret < ans) ans = ret, ind = j;
	}
	if(ans != INF) printf("%lld %lld\n", ind, ans);
	else puts("*");
	return 0;
}
