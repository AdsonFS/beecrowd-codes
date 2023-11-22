#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef unsigned long long int ull;
int v[MAX], pd[MAX][MAX], N;

int solve(int i, int j) {
	if(i > j) return 0;
	int &ans = pd[i][j];
	if(ans != -1) return ans;
	bool ok1 = (v[i] % 2 == 0);
	bool ok2 = (v[j] % 2 == 0);
	if((i+j) % 2) {
		ans = -1;
		ans = max(ans, max(solve(i+1, j), solve(i, j-1)));
		if(ok1 && ok2) ans = max(ans, max(solve(i+1, j)+1, solve(i, j-1)+1));
		if(ok1) ans = max(ans, max(solve(i+1, j)+1, solve(i, j-1)));
		if(ok2) ans = max(ans, max(solve(i+1, j), solve(i, j-1)+1));
	}
	else {
		ans = 1 << 30;
		ans = min(ans, min(solve(i+1, j), solve(i, j-1)));
		if(ok1 && ok2) ans = min(ans, min(solve(i+1, j)+1, solve(i, j-1)+1));
		if(ok1) ans = min(ans, min(solve(i+1, j)+1, solve(i, j-1)));
		if(ok2) ans = min(ans, min(solve(i+1, j), solve(i, j-1)+1));
	}
	return ans;
}

int main(int argc, char** argv) {
	while(scanf("%d", &N) && N) {
		N *= 2;
		memset(pd, -1, sizeof pd);
		rep(i, 0, N) scanf("%d", &v[i]);
		printf("%d\n", solve(0, N-1));
	}
	return 0;
}



