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
typedef pair<int, ll> il;
const int MAX = 1e5+5;
const int mod = 1e9+7;
int T, M, N, ret;
int pd[MAX][55];

int solve() {
	int ans = 0;
	REP(i, M, N) pd[i][1] = 1;
	REP(t, 1, T) REP(i, M, N)
		pd[i][t] = ((ll) pd[i][t] + pd[i-1][t-1] + pd[i+1][t-1]) % mod;
	REP(i, M, N) ans = ((ll) ans + pd[i][T]) % mod;
	return ans;
}

int main(int argc, char *argv[]) {
	scanf("%d%d%d", &T, &M, &N);
	printf("%d\n", solve());
	return 0;
}