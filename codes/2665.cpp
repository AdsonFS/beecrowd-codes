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

const double EPS = 1e-9;
inline int cmp( double x, double y = 0, double tol = EPS){
	return ( (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1);
}

struct point {
	int x, y;
	point() { }
	point(int _x, int _y) { x = _x; y = _y; }
	point operator - (point q) { return point(x-q.x, y-q.y); }
};

int cross(point a, point b){
	return a.x*b.y - a.y*b.x;
}

int ccw(point p, point q, point r){
	return cmp(cross(q - p, r - p));
}

///////////////////////////////////////////////////
const int MAX = 1e2+2;
vector<point> num;
int pd[MAX][MAX];
int N, x, y;
point a, b;

bool ok(point c, point d) {
	if(!ccw(a, c, d) || !ccw(b, c, d)) return false;
	if(ccw(a, c, d) == ccw(b, c, d)) return false;
	return true;
}

bool cmp1(const point &p1, const point &p2) {
	if(p1.y != p2.y) return p1.y < p2.y;
	return p1.x < p2.x;
}

int solve(int i, int j) {
	if(i == N) return 0;
	if(pd[i][j] != -1) return pd[i][j];
	pd[i][j] = solve(i+1, j);
	if(j == N || ok(num[j], num[i]))
		pd[i][j] = max(pd[i][j], solve(i+1, i)+1);
	return pd[i][j];
}

int main(int argc, char ** argv) {
	scanf("%d%d%d", &N, &x, &y);
	a.x = x; b.x = y;
	a.y = b.y = 0;
	rep(i, 0, N) {
		scanf("%d%d", &x, &y);
		num.pb(point(x, y));
	}
	sort(all(num), cmp1);
	memset(pd, -1, sizeof pd);
	printf("%d\n", solve(0, N));
	return 0;
}
