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
const int MAX = 1e4+4;
int N, a[MAX];
ll pd[MAX];

ll solve() {
	memset(pd, 0, sizeof pd);
	PER(i, N, 1) REP(j, i, N) {
		if((i+j)%2) pd[j] = max(pd[j]+a[i], pd[j-1]+a[j]);
		else pd[j] = min(pd[j], pd[j-1]);
	}
	return pd[N];
}

int main(int argc, char ** argv) {
	while(scanf("%d", &N) != EOF) {
		REP(i, 1, N) scanf("%d", &a[i]);
		printf("%lld\n", solve());
	}
	return 0;
}
