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
#define MAX 100000010
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long int ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;

struct point {
	int x, y;
	point() {}
	point(int X, int Y) { x = X; y = Y;}
};

bool cmp(const point &p1, const point &p2) {
	return (p1.x < p2.x);
}

int main(int argc, char** argv) {
	int n;
	int x, y;
	int ans = 0;
	vector<point> p;
	scanf("%d", &n);
	rep(i, 0, n) {
		scanf("%d%d", &x, &y);
		p.pb(point(x, y));
	}
	sort(all(p), cmp);
	rep(i, 0, n) {
		point a = p[i];
		int up = INF;
		int down = -INF;
		rep(j, i+1, n) {
			point b = p[j];
			if(b.y > a.y && b.y < up) {
				up = b.y;
				ans++;
			}
			else if(b.y < a.y && b.y > down) {
				down = b.y;
				ans++;
			}
		}
	}
	printf("%d\n", ans);
	return 0;
}







