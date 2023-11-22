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
#define pb push_back
#define pf push_front
#define mk make_pair
#define MAX 1000100
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n, m, x, ind;
	scanf("%d%d", &n, &m);
	ull v = 1;
	ull ans = 0;
	while(n--) {
		scanf("%d", &x);
		v = (v * x) / __gcd(v, (ull)x);
	}
	for(ull i = 1; i <= (ull)m; i++) {
		ull now = (v * i) / __gcd(v, i);
		if(now <= (ull)m && now > ans) {
			ans = now;
			ind = i;
		}
	}
	printf("%d\n", ind);
	return 0;
}
