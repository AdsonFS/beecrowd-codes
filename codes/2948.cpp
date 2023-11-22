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
const int MAX = 1e5 + 5;

inline int cmp( double x, double y = 0, double tol = 1e-6) {
	return ( (x <= y + tol) ? (x + tol < y) ? -1 : 0 : 1);
}

struct point {
	double x, y;
	point(double x = 0, double y = 0): x(x), y(y) {}
	point operator +(point q) {
		return point(x + q.x, y + q.y);
	}
	point operator -(point q) {
		return point(x - q.x, y - q.y);
	}
	point operator *(double t) {
		return point(x * t, y * t);
	}
	point operator /(double t) {
		return point(x / t, y / t);
	}
	point operator /(point q) { // divisao de num complexos
		return point(x * q.x + y * q.y, y * q.x - x * q.y) / q.norma2();
	}
	double norma2() {
		return ( * this) * ( * this);    // |u|^2
	}
	double operator *(point q) {
		return x * q.x + y * q.y;
	}
	double operator %(point q) {
		return x * q.y - y * q.x;
	}
	int cmp(point q) const{
		if(int t = ::cmp(x, q.x)) return t;
		return ::cmp(y, q.y);
	}
	bool operator == (point q) const{return cmp(q) == 0;};
	bool operator != (point q) const{return cmp(q) != 0;};
	bool operator < (point q) const{return cmp(q) < 0;};
};

#define vec(a, b) (b-a)
typedef vector<point> polygon;

typedef pair<point, double> circle;

double abs(point u){
	return sqrt(u*u);
}

bool in_circle(circle C, point p) {
	return cmp(abs(p - C.first), C.second) <= 0;
}

point circumcenter(point p, point q, point r) {
	point a = p - r, b = q - r, c, ret;
	c = point(a * (p + r) / 2, b * (q + r) / 2);
	ret = point(c % point(a.y, b.y), point(a.x, b.x) % c) / (a % b);
	return ret;
}

vector<point> T;
void spanning_circle() {
	int n = T.size();
	random_shuffle(all(T));
	circle C(point(), -(1 << 30));
	rep(i, 0, n) if(!in_circle(C, T[i])) {
		C = circle(T[i], 0);
		rep(j, 0, i) if (!in_circle(C, T[j])) {
			C = circle((T[i] + T[j]) / 2, abs(T[i] - T[j]) / 2);
			rep(k, 0, j) if (!in_circle(C, T[k])) {
				point O = circumcenter(T[i], T[j], T[k]);
				C = circle(O, abs(O - T[k]));
			}
		}
	}	
	cout << fixed << setprecision(2);
	cout << C.F.x << " " << C.F.y << " " << C.S << " " << 8*3.14*C.S << endl;
		
}

int main(int argc, char * * argv) {
	int N;
	double x, y;
	cin >> N;
	rep(i, 0, N) {
		cin >> x >> y;
		T.pb(point(x, y));
	}
	spanning_circle();
	return 0;
}
