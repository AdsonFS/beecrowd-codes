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
const int MAX = 5e4+4;
int N, a[MAX], ans;
int d[MAX], e[MAX];

int main(int argc, char ** argv) {
	scanf("%d", &N);
	REP(i, 1, N) scanf("%d", &a[i]), d[i] = min(d[i-1]+1, a[i]);
	PER(i, N, 1) e[i] = min(e[i+1]+1, a[i]), ans = max(ans, min(d[i], e[i]));
	printf("%d\n", ans);
	return 0;
}
