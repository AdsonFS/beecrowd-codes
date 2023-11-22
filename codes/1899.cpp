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
double ma, mb;

int main(int argc, char** argv) {
	int n, d, a, b;
	scanf("%d", &n);
	rep(i, 0, n) {
		scanf("%d%d%d", &d, &a, &b);
		if(!i) ma = (double)((a * 1.0) / d); 
		if(!i) mb = (double)((b * 1.0) / d); 
		if(ma * d < (double)(a)) ma = (double)((a * 1.0) / d);
		if(mb * d > (double)(b)) mb = (double)((b * 1.0) / d);
	}
	scanf("%d%d%d", &d, &a, &b);
	double ya = ma * d;
	double yb = mb * d;
	if(( (ya <= b && yb >= a) && ya <= yb ) || n == 0) puts("Y");
	else puts("N");
	return 0;
}

