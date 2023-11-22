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
const int MAX = 1e2+2;
int P, C, N, x, ans;

int main(int argc, char ** argv) {
	scanf("%d%d%d", &P, &C, &N);
	int a = P + C;
	rep(i, 0, N) {
		scanf("%d", &x);
		if(a <= P) break;
		if(a-x > x) break;
		if(a > x && i) ans++;
		if(a > x) a = x;
	}
	printf("%d\n", ans);
	return 0;
}
