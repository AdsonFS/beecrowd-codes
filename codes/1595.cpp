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
#define MAX 20000000
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
	
int main(int argc, char** argv) {
	int n, m, r, x;
	scanf("%d", &n);
	while(scanf("%d%d%d", &n, &m, &r) != EOF) {
		double ans = 0.0;
		vector<int> num;
		rep(i, 0, n) {
			scanf("%d", &x);
			num.pb(x);
		}
		sort(all(num));
		rep(i, 0, n) {
			if(m) {
				ans += (double)(1.0 / (num[i] + r));
				m--;
			}
			else ans += (double)(1.0 / num[i]);
		}
		printf("%.2lf\n", ans);
	}
	return 0;
}
