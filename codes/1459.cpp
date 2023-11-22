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
#define mod 998244353
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef unsigned long long int ull;
typedef pair<int, pair<int, char> > pci;

bool comp(const ii &x1, const ii &x2) {
	if(x1.F != x2.F) return x1.F < x2.F;
	return x1.F < x2.F;
}
vector<ii> num;

int main(int argc, char** argv) {
	int N, a, b;
	while(scanf("%d", &N) != EOF) {
		int ans = 0;
		bool ini = 1;
		rep(i, 0, N) {
			scanf("%d%d", &a, &b);
			num.pb(mk(a, b));
		}
		sort(all(num), comp);
		num.pb(mk(INF, INF));
		rep(i, 0, N+1) {
			if(ini) {
				a = num[i].F;
				b = num[i].S;
				ini = 0;
			}
			if(num[i].F > b) {
				ans++;
				a = num[i].F;
				b = num[i].S;
			}
			a = max(a, num[i].F);
			b = min(b, num[i].S);
		}
		num.clear();
		printf("%d\n", ans);
	}
	return 0;
}
