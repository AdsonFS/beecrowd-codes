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
#define S second
#define F first
#define MAX 100
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	ull t1, t2, n;
	cin >> t1 >> t2 >> n;
	ull t = (t2 - t1) * 60;
	ull n1 = (2 * n);
	ull n2 = n * n;
	ull d1 = t;
	ull d2 = t * t;
	n = (n1 * t) - n2;
	ull d = d2;
	ull m = __gcd(n, d);
	cout << n/m << "/" << d/m << "\n";
	return 0;
}