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
int X[MAX], Y[MAX];
int pai[MAX];
int n;

int find(int a) {
	if(pai[a] == a) return a;
	return pai[a] = find(pai[a]);
}

int main(int argc, char** argv) {
	while(scanf("%d", &n) != EOF) {
		double ans = 0.0;
		vector<pdi> num;
		rep(i, 0, n) {
			scanf("%d%d", &X[i], &Y[i]);
			pai[i] = i;
		}
		rep(i, 0, n) {
			rep(j, i+1, n) {
				double d = hypot(X[i] - X[j], Y[i] - Y[j]);
				num.pb(mk(d, mk(i, j)));
			}
		}
		sort(all(num));
		n = num.size();
		rep(i, 0, n) {	// union
			int a = find(num[i].S.F);
			int b = find(num[i].S.S);
			if(a != b) {
				ans += num[i].F;
				pai[a] = b;
			}
		}
		printf("%.2lf\n", ans);
	}
	return 0;
}
