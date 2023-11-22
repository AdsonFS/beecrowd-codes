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
const int MOD = 1e9+7;
const int MAX = 1e3+3;
ll mp[MAX], fat[MAX];
char s[MAX];

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

int main(int argc, char ** argv) {
	fat[0] = 1;
	rep(i, 1, MAX) fat[i] = (fat[i-1] * i) % MOD;
	while(scanf(" %s", s) != EOF) {
		int sz = strlen(s);
		ll ans = fat[sz];
		memset(mp, 0, sizeof mp);
		rep(i, 0, sz) mp[s[i]-'A']++;
		rep(i, 0, 30) ans = (ans * ft(fat[mp[i]], MOD-2, MOD)) % MOD;
		printf("%lld\n", ans);
	}
	return 0;
}
