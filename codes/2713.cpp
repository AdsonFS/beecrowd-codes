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
#define MAX 1010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
double pd[MAX][MAX + 200];
int v[MAX], d[MAX];
int n, k;
// += v[i] / dano

double solve(int i, int m, int dano) {
	if(i >= n) return 0;
	if(pd[i][m] > -0.5) return pd[i][m];
	double ans1 = INF, ans2 = INF;
	int dano2 = dano + d[i];
	if(m < k)ans1 = solve(i+1, m+1, dano) + ((v[i] * 1.0) / dano2);		// nao gasta mana
	ans2 = solve(i+1, m, dano) + ((v[i] * 1.0) / dano);			// gasta mana
	return pd[i][m] = min(ans1, ans2);
}

int main(int argc, char** argv) {
	int dano;
	while(scanf("%d%d%d", &n, &k, &dano) != EOF) {
		rep(i, 0, n) scanf("%d%d", &v[i], &d[i]);
		memset(pd, -1, sizeof(pd));
		printf("%.4lf\n", solve(0, 0, dano));
	}
	return 0;
}
