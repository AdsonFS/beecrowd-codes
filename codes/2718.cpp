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
#define MOD 10000LL
#define pb push_back
#define pf push_front
#define mk make_pair
#define MAX 110
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
int now, ans;

void bin(ull n) {
	ull q = n / 2;
	ull r = n % 2;
	if(q) bin(q);
	if(r) now++;
	else now = 0;
	ans = max(ans, now);
}

int main(int argc, char** argv) {
	ull n;
	cin >> n;
	while(cin >> n) {
		now = ans = 0;
		bin(n);
		printf("%d\n", ans);
	}
	return 0;
}

