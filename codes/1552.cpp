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
int x[MAX], y[MAX];
int p[MAX];

int find(int a) {
	if(p[a] == a) return a;
	return p[a] = find(p[a]);
}

int main(int argc, char** argv) {
	int t, n;
	scanf("%d", &t);
	while(scanf("%d", &n) != EOF) {
		double ans = 0.0;
		vector<pdi> num;
		rep(i, 0, n) {
			scanf("%d%d", &x[i], &y[i]);
			p[i] = i;
		}
		rep(i, 0, n)
			rep(j, i+1, n) {
				double d = hypot(x[i] - x[j], y[i] - y[j]);
				num.pb(pdi(d, ii(i, j)));
			}
		sort(all(num));		// crescente
		n = num.size();
		rep(i, 0, n) {
			int a = find(num[i].S.F);
			int b = find(num[i].S.S);
			if(a != b) {
				ans += num[i].F;
				p[a] = b;
			}
		}
		printf("%.2lf\n", ans / 100.0);
	}
	return 0;
}
