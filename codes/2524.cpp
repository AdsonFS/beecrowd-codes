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
const int MAX = 1e3+3;
int N, M, a[MAX];
int pd[MAX][MAX];

int solve(int i, int m) {
	if(i == N && !m) return 0;
	if(i == N) return -(1 << 30);
	if(pd[i][m] != -1) return pd[i][m];
	return pd[i][m] = max(solve(i+1, m), solve(i+1, (m+a[i])%M)+1);
}

int main(int argc, char ** argv) {
	while (scanf("%d%d", &M, &N) != EOF) {
		memset(pd, -1, sizeof pd);
		rep(i, 0, N) scanf("%d", a+i);
		printf("%d\n", solve(0, 0));
	}
	return 0;
}
