#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
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
#define MAX 1000000010
#define S second
#define F first
typedef long long int ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long ull;

void primeFactors(ll N) {
	map<int, int> factors;
	map<int, int> :: iterator it;
	while (N % 2 == 0) ++factors[2], N >>= 1;
	for(ll PF = 3; PF * PF <=
			N; PF += 2) {
		while (N % PF == 0)
			N /= PF, factors[PF]++;
	}
	if (N > 1) factors[N] = 1;
	int j = 0;
	for(it = factors.begin(); it != factors.end(); it++) {
		if(j++) cout << " x " << it->F;
		else cout << " " << it->F;
	}
	printf("\n");
}
int main(int argc, char** argv) {
	ll x;
	while(scanf("%lld", &x) && x) {
		printf("%lld =", x);
		primeFactors(x);
	}

	return 0;
}
