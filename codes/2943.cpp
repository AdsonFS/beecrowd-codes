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
int a[MAX], b[MAX];
int N, v[MAX], ans;

int main(int argc, char ** argv) {
	scanf("%d", &N);
	REP(i, 1, N) a[i] = b[i] = 1;
	REP(i, 1, N) scanf("%d", &v[i]);
	REP(i, 1, N) rep(j, 1, i) a[i] = max(a[i], a[j] * (v[i] > v[j]) + 1);
	PER(i, N, 1) PER(j, N, i+1) b[i] = max(b[i], b[j] * (v[i] > v[j]) + 1);
	REP(i, 1, N) ans = max(ans, a[i] + b[i]);
	printf("%d\n", ans);
	return 0;
}
