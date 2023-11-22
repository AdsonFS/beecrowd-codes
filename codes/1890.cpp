#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = "<< x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char ** argv) {
	int t, n, m, ans;
	scanf("%d", &t);
	while(t--) {
		ans = 1;
		int alpha = 26;
		int digitos = 10;
		scanf("%d %d", &n, &m);
		rep(i, 0, n) ans = ans * alpha;
		rep(i, 0, m) ans = ans * digitos;
		printf("%d\n", (n+m) == 0 ? 0 : ans);
	}
	return 0;
}
