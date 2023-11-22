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
const int MAX = 1e6+6;
int N, x;
ll b[2][MAX];

void update(int i, ll _x, int k) {
	for(; i; i -= i&-i)
		b[k][i] += _x;
}

ll query(int i, int k) {
	ll sum = 0;
	for(; i <= N; i += i&-i)
		sum += b[k][i];
	return sum;
}

int main(int argc, char ** argv) {
	while(scanf("%d", &N) != EOF) {
		ll ans = 0;
		memset(b, 0, sizeof b);
		REP(i, 1, N) {
			scanf("%d", &x);
			update(x-1, 1, 0);
			update(x-1, query(x, 0), 1);
			ans += query(x, 1);
		}
		printf("%lld\n", ans);
	}
	return 0;
}
