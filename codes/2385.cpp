#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 510
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef pair<double, ii> pdi;
typedef unsigned long long int ull;
int n, p, q, r, s, x, y, l, c;

int get_A(int i, int j) {
	return ((p * i) + (q * j)) % x;
}

int get_B(int i, int j) {
	return ((r * i) + (s * j)) % y;
}

int main(int argc, char** argv) {
	ll ans = 0;
	scanf("%d%d%d%d%d%d%d%d%d", &n, &p, &q, &r, &s, &x, &y, &l, &c);
	REP(k, 1, n) ans += get_A(l, k) * get_B(k ,c);
	printf("%lld\n", ans);
	return 0;
}
