#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 210
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int K, a, b;
	ll N;
	while(scanf("%lld%d", &N, &K) && (N+K)) {
		ll ma = N, me = N;
		while(K--) {
			scanf("%d%d", &a, &b);
			if((N & (1LL << a)) && !(N & (1LL << b))) { N ^= (1LL << a); N |= (1LL << b); }
			else if(!(N & (1LL << a)) && (N & (1LL << b))) { N |= (1LL << a); N ^= (1LL << b); }
			ma = max(ma, N);
			me = min(me, N);
		}
		printf("%lld %lld %lld\n", N, ma, me);
	}
	return 0;
}

