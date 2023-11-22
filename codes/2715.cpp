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
#define MAX 1000010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
ll ss, sum, ans;
int N, a[MAX];

int main(int argc, char** argv) {
	while(scanf("%d", &N) != EOF) {
		sum = ss = 0;
		ans = (1LL << 60);
		REP(i, 1, N) scanf("%d", a + i), sum += a[i];
		REP(i, 1, N) ss += a[i], ans = min(ans, abs((sum-ss)-ss)); 
		cout << ans << endl;
	}
	return 0;
}
