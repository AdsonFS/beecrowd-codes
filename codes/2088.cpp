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
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ii> PII;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
double dist[20][20];
double pd[20][1 << 17];
int x[20], y[20];
int n, target;

double solve(int ind, int bitmask) {
	if(bitmask == target) return dist[ind][0];
	if(pd[ind][bitmask] > -0.5) return pd[ind][bitmask];
	double ans = INF;
	REP(i, 0, n)
		if(!(bitmask & (1 << i)))
			ans = min(ans, solve(i, bitmask | (1 << i)) + dist[ind][i]);
	return pd[ind][bitmask] = ans;
}

int main(int argc, char** argv) {
	while(scanf("%d", &n) && n) {
		REP(i, 0, n)
			scanf("%d%d", &x[i], &y[i]);
		REP(i, 0, n)
			REP(j, i, n)
				dist[i][j] = dist[j][i] = hypot(x[i] - x[j], y[i] - y[j]);
		REP(i, 0, n)
			REP(j, 0, (1 << (n + 1)))
				pd[i][j] = -1;
		target = (1 << (n + 1)) - 1;
		printf("%.2lf\n", solve(0, 1));
	}
	return 0;
}

