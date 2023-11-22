#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = "<< x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

bool comp(const ii &x1, const ii &x2) {
	if(x1.F != x2.F) return (x1.F < x2.F);
	return (x1.S < x2.S);
}

int main(int argc, char ** argv) {
	int q, n, t, p;
	scanf("%d", &q);
	while(q--) {
		vector<ii> num;
		scanf("%d", &n);
		rep(i, 0, n) {
			scanf("%d%d", &t, &p);
			num.pb(ii(t, p));
		}
		sort(all(num), comp);
		num.pb(ii(-1, 0));
		int ans = 0;
		int best = num[0].S;
		REP(i, 1, n) {
			if(num[i].F != num[i-1].F) {
				ans += best;
				best = num[i].S;
			}
			else if(num[i].S > best) {
				if(num[i].S <= 100 || best > 100) best = num[i].S;
				else if(best < 10) best = num[i].S;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
