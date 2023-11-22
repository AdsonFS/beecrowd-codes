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
const int MAX = 1e3+3;
int N, K, x[MAX], w[MAX];
int mid[MAX][MAX];
ll pd[MAX][MAX];
ll c[MAX][MAX];

int main(int argc, char ** argv) {
	while(scanf("%d%d", &N, &K) != EOF) {
		memset(c, 0, sizeof c);
		REP(i, 1, N) scanf("%d%d", x+i, w+i);
		PER(j, N, 1) PER(i, j-1, 1)
			c[i][j] = w[i]*(x[j]-x[i]) + c[i+1][j];
		REP(k, 1, K) {
			mid[N+1][k] = N;
			PER(n, N, 1) {
				if(k == 1) {
					pd[n][k] = c[1][n];
					mid[n][k] = 1;
					continue;
				}
				ll ans = (1LL << 60);
				REP(i, mid[n][k-1], mid[n+1][k]) {
					ll now = pd[i-1][k-1] + c[i][n];
					if(now < ans) {
						ans = now;
						mid[n][k] = i;
					}
				}
				pd[n][k] = ans;
			}
		}
		printf("%lld\n", pd[N][K]);
	}
	return 0;
}
