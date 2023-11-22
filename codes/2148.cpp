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
int pd[15][85];		// dados / soma
int n, D, S;

int solve(int d, int s) {
	if(d == D) return s == S;
	if(s >= S) return 0;
	if(pd[d][s] != -1) return pd[d][s];
	int ans = 0;
	REP(i, 1, 6)
		ans += solve(d + 1, s + i);
	return pd[d][s] = ans;
}

int main(int argc, char** argv) {
	scanf("%d", &n);
	while(n--) {
		memset(pd, -1, sizeof(pd));
		scanf("%d%d", &S, &D);
		printf("%.15lf\n", solve(0, 0) / pow(6, D));
	}
	return 0;
}

