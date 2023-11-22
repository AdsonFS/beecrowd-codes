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
const int MAXN = 1e2+2;
const int MAX = 3e3+3;
int b[MAXN], w[MAXN];
int N, W, pd[MAX];

int solve() {
	REP(i, 0, W) pd[i] = 0;
	REP(i, 1, N) PER(j, W, w[i])
		pd[j] = max(pd[j], pd[j-w[i]]+b[i]);
	return pd[W];
}

int main(int argc, char ** argv) {
	while(scanf("%d", &N) && N) {
		REP(i, 1, N) 
			scanf("%d%d", &b[i], &w[i]);
		scanf("%d", &W);
		printf("%d\n", solve());
	}
	return 0;
}
