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
double pd[6][16][1<<16];
int x[16], y[16];
double d[16][16];
int N, M;

double solve(int m, int j, int b) {
	double &ans = pd[m][j][b];
	if(ans > -0.5) return ans;
	ans = 1e9;
	rep(i, M, M+N) {
		if(b & (1 << i)) continue;
		ans = min(ans, solve(m, i, b | (1 << i)) + d[j][i]);
		rep(k, 0, M)
			ans = min(ans, d[j][i]+d[i][m] + solve(k, k, b | (1 << i)));
	}
	if(ans > 1e8) ans = d[m][j];
	return ans;
}

int main(int argc, char ** argv) {
	double ans = 1e9;
	scanf("%d%d", &N, &M);
	memset(pd, -1, sizeof pd);
	rep(i, 0, M+N) scanf("%d%d", x+i, y+i);
	rep(i, 0, M+N) rep(j, 0, M+N) d[i][j] = hypot(x[i]-x[j], y[i]-y[j]);
	rep(i, 0, M) ans = min(ans, solve(i, i, 0));
	printf("%.2lf\n", ans);
	return 0;
}
