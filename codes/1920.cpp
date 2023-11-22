#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 25
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

struct game {
	int d, b, id;
};

int main(int argc, char** argv) {
	int n, cy, cx, y, x, r1, r2;
	while(scanf("%d", &n) && n) {
		scanf("%d%d", &cy, &cx);
		scanf("%d%d", &r1, &r2);
		n *= 2;
		game gg;
		gg.d = gg.b = 0;
		vector<game> num;
		rep(i, 0, 2) {
			gg.id = i;
			num.pb(gg);
		}
		rep(i, 0, n) {
			scanf("%d%d", &y, &x);
			double dist = hypot(cy - y, cx - x);
			if(dist < r1) num[i%2].d++;
			else if(dist <= r2) num[i%2].b++;
		}
		if(num[0].d == num[1].d && num[0].b == num[1].b) puts("C = P");
		else if(num[0].d == num[1].d && num[0].b > num[1].b) puts("C > P");
		else if(num[0].d == num[1].d && num[0].b < num[1].b) puts("P > C");
		else if(num[0].d > num[1].d) puts("C > P");
		else puts("P > C");
	}
	return 0;
}
