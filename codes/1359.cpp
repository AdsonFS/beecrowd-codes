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
typedef pair<ll, ll> pl;
typedef pair<int, int> ii;
const int MAX = 410;
int N, pd[MAX][MAX];
int a[MAX], s[MAX];
double F;

int q(int l, int r) { return s[r]-s[l-1]; }

int solve(int i, int j) {
	if(i == j) return 0;
	if(pd[i][j] != -1) return pd[i][j];
	pd[i][j] = (1 << 30);
	rep(k, i, j) {
		pd[i][j] = min(pd[i][j], solve(i, k) + solve(k+1, j) + max(q(i, k), q(k+1, j)));
	}
	return pd[i][j];
}

int main(int argc, char ** argv) {
	while(scanf("%d%lf", &N, &F) && N) {
		int ans = (1 << 30);
		memset(pd, -1, sizeof pd);
		REP(i, 1, N) scanf("%d", a+i);
		rep(i, N+1, N+N) a[i] = a[i-N];
		REP(i, 1, N+N) s[i] = s[i-1] + a[i];
		REP(i, 1, N) ans = min(ans, solve(i, i+N-1));
		printf("%.2lf\n", ans*F);
	}
	return 0;
}
