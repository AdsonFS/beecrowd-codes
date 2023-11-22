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
const int MOD = 1300031;
const int MAX = 2e6+6;
ll fat[MAX];

ll ft(ll b, ll expo, ll mod) {
    ll ret = 1, pot = b % mod;
    while(expo) {
        if(expo & 1)
            ret = (ret * pot) % mod;
        pot = (pot * pot) % mod;
        expo >>= 1;
    }
    return ret;
}

ll calc(int N, int K) {
	ll a1 = (fat[N] * ft(fat[N-K], MOD-2, MOD)) % MOD; 
	return  (a1 * ft(fat[K], MOD-2, MOD)) % MOD;
}

int main(int argc, char ** argv) {
	int T, N, C;
	fat[0] = 1;
	rep(i, 1, MAX)
		fat[i] = (fat[i-1] * i) % MOD;
	scanf("%d", &T);
	rep(t, 0, T) {
		scanf("%d%d", &N, &C);
		printf("%lld\n", calc(N+C-1, C));
	}
	return 0;
}
