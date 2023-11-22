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
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int n, t, h, d, x;
char op, l;

int main(int argc, char** argv) {
	scanf("%d", &t);
	while(t--) {
		vector<ii> num;
		scanf("%d%d", &n, &d);
		num.pb(ii(0, 1));
		int ans = 0;
		rep(i, 0, n) {
			scanf(" %c %c %d", &op, &l, &x);
			if(op == 'B') num.pb(ii(x, 1));
			else num.pb(ii(x, 0));
		}
		num.pb(ii(d, 1));
		num.pb(ii(d, 1));
		int tam = num.size() - 1;
		rep(i, 1, tam) {
			if(num[i].S)
				ans = max(ans, max(abs(num[i].F - num[i-1].F), abs(num[i].F - num[i+1].F)));
			else
				ans = max(ans, abs(num[i+1].F - num[i-1].F));
		}
		printf("Case %d: %d\n", ++h, ans);
	}
	return 0;
}
