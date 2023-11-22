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
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
vector<string> num;
string s;

int main(int argc, char** argv) {
	int n;
	cin >> n;
	int ans = 0;
	int cnt = 0;
	rep(i, 0, n) {
		cin >> s;
		num.pb(s);
	}
	bool ok = true;
	num.pb("-----");
	REP(i, 0, n) {
		if(num[i][0] == '.') cnt++;
		else {
			if(cnt > 2) ok = false;
			if(cnt) ans++;
			cnt = 0;
		}
	}
	if(ok) printf("%d\n", ans);
	else puts("N");
	return 0;
}










