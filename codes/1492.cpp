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
const int MAX = 60;
ll pd[2][MAX+2][2];
ll f[2][MAX+2];

ll solve(int i, int p, ll A, int k) {
	if(i < 0) return 0LL;
	if(pd[k][i][p] != -1) return pd[k][i][p];
	if(p) {
		if(A & (1LL << i)) pd[k][i][p] = solve(i-1, p, A, k) + solve(i-1, !p, A, k) + f[k][i]+1LL;
		else pd[k][i][p] = solve(i-1, p, A, k);
	}
	else
		pd[k][i][p] = 2LL*solve(i-1, p, A, k) + (1LL << i);
	return pd[k][i][p];
}

int main(int argc, char ** argv) {
	ll A, B;
	while(scanf("%lld%lld", &A, &B) != EOF) {
		memset(pd, -1, sizeof pd);
		ll x = 0LL, y = 0LL; A--;
		rep(i, 0, MAX) {
			f[0][i] = x; f[1][i] = y;
			x = x+((A&(1LL<<i))!=0)*(1LL<<i);
			y = y+((B&(1LL<<i))!=0)*(1LL<<i);
		}
		printf("%lld\n", solve(MAX, 1, B, 1)-solve(MAX, 1, A, 0));
	}
	return 0;
}
