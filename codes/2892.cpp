#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define pf push_front
#define mk make_pair
#define mod 1000007
#define MAX 200010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef pair<string, int> psi;
typedef unsigned long long int ull;
set<ll> :: iterator it;
set<ll> divisor;

void divi(ll N) {
	for(ll div = 1, k; div*div <= N; div++){
		if (N % div == 0){
			divisor.insert(div);
			k = N/div;
			if(k != div) divisor.insert(k);
		}
	}
}

int main(int argc, char** argv) {
	ll t, a, b;
	while(scanf("%lld%lld%lld", &t, &a, &b) && (t+a+b)) {
		divi(t);
		bool ok = true;
		ll m = (a * b) / __gcd(a, b);
		for(it = divisor.begin(); it != divisor.end(); it++) {
			ll v = *it;
			ll M = (m * v) / __gcd(m, v);
			if(M == t) {
				printf("%s%lld", ok ? "" : " ", v);
				ok = false;
			}
		}
		divisor.clear();
		printf("\n");
	}
	return 0;
}
