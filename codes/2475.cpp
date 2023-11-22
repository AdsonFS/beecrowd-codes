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
const int MAXN = 1e4+4;
const int MAXK = 5e2+2;
int mid[MAXN][MAXK];
ll pd[MAXN][MAXK];
int N, K, a[MAXN];
ll s[MAXN];

ll q(int l, int r) { return (s[r]-s[l-1])*(r-l+1); }

int main(int argc, char ** argv) {
	scanf("%d%d", &N, &K);
	REP(i, 1, N) scanf("%d", a+i);
	REP(i, 1, N) s[i] = s[i-1] + a[i];
	REP(k, 1, K) {
		mid[N+1][k] = N;
		PER(n, N, 1) {
			if(k == 1) {
				pd[n][k] = q(1, n);
				mid[n][k] = 1;
				continue;
			}
			ll ans = (1LL << 60);
			REP(i, mid[n][k-1], mid[n+1][k]) {
				ll now = pd[i-1][k-1] + q(i, n);
				if(now < ans) {
					ans = now;
					mid[n][k] = i;
				}
			}
			pd[n][k] = ans;
		}
	}
	printf("%lld\n", pd[N][K]);
	return 0;
}
