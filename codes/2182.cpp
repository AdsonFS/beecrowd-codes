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
#define pb push_back
#define pf push_front
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
int p[MAX];
ii w[MAX];

int find(int a) {
	if(p[a] == a) return a;
	return p[a] = find(p[a]);
}

int main(int argc, char** argv) {
	int n, m, u, v, c, ind;
	scanf("%d%d", &n, &m);
	REP(i, 0, n) p[i] = i;
	rep(i, 0, m) {
		scanf("%d%d%d", &u, &v, &c);
		int a = find(u);
		int b = find(v);
		int A = max(a, b);
		int B = min(a, b);
		if(p[A] != p[B]) {
			p[B] = A;
			w[A].F += c + w[B].F;
			w[A].S += w[B].S + 1;
		}
		else {
			p[B] = A;
			w[A].F += c;
			w[A].S++;
		}
	}
	long double now;
	long double ans = 1000000.0;
	REP(i, 1, n) {
		int a = find(i);
		now = w[a].F;
		if(now != 0) now = (1.0 * w[a].F) / w[a].S;
		if(now <= ans) {
			ans = now;
			ind = i;
		}
	}
	printf("%d\n", ind);
	return 0;
}

