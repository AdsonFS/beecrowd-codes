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
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	char r[10];
	while(cin >> r) {
		ll R = 0;
		int h = 1;
		int tam = strlen(r);
		for(int i = tam-1; i >= 0; i--) {
			char c = r[i];
			if(c == '.') continue;
			R += (c - '0') * h;
			h *= 10;
		}
		// cout << R << endl;
		// printf("%.4lf\n", r);
		ll RR = 36000;
		ll ans = __gcd(RR, R);
		cout << RR / ans << "\n";
	}
	return 0;
}






