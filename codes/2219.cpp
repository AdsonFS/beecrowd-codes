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
#define MAX 1035
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int main(int argc, char** argv) {
	int n, m, x;
	scanf("%d", &x);
	while(scanf("%d%d", &n, &m) != EOF) {
		int ans = -1;
		vector<int> num;
		rep(i, 0, m) {
			scanf("%d", &x);
			if(x < n) num.pb(x);
		}
		num.pb(0);
		num.pb(n);
		sort(all(num));
		m = num.size();
		rep(i, 1, m)
			ans = max(ans, num[i] - num[i-1]);
		printf("%d\n", ans);
	}
	return 0;
}
