#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
const int MAX = 2000 * 150 + 10;
int N, ans, sum, a[MAX], pd[MAX];

int solve() {
	REP(i, 0, sum) pd[i] = 0;
	ans = (1 << 30); pd[0] = 1;
	REP(i, 1, N) PER(j, sum, a[i])
		pd[j] |= pd[j-a[i]];
	REP(i, 0, sum) if(pd[i]) ans = min(ans, abs((sum-i)-i));
	return ans;
}

int main(int argc, char** argv) {
	while(scanf("%d", &N) != EOF) {
		REP(i, 1, N) scanf("%d", a + i), sum += a[i];
		printf("%d\n", solve());
		sum = 0;
	}
	return 0;
}
