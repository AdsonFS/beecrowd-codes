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
int T, x, h;
ii p[10];

int main(int argc, char * * argv) {
	scanf("%d", &T);
	rep(t, 0, T) {
		double ans = 1e9;
		string r, s = "123567";
		scanf("%d%d", &p[4].F, &p[4].S);
		rep(i, 0, 6) {
			scanf("%d", &x);
			scanf("%d%d", &p[x].F, &p[x].S);
		}
		do {
			int u = 4;
			double d = 0.0;
			rep(i, 0, s.size()) {
				d += hypot(p[u].F-p[s[i]-'0'].F, p[u].S-p[s[i]-'0'].S);
				u = s[i]-'0';
			}
			d += hypot(p[u].F-p[4].F, p[u].S-p[4].S);
			if(d == ans && (r.empty() || s < r)) r = s, ans = d;
			else if(d < ans) r = s, ans = d;
			
		} while(next_permutation(all(s)));
		printf("Caso %d:\n4", ++h);
		rep(i, 0, s.size()) printf("->%c", r[i]);
		printf("->4: %.5lf\n", ans);
	}
	return 0;
}
