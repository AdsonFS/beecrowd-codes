#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int p1[MAX], p2[MAX];

int find1(int a) {
	if(p1[a] == a) return a;
	return p1[a] = find1(p1[a]);
}

int find2(int a) {
	if(p2[a] == a) return a;
	return p2[a] = find2(p2[a]);
}


int main(int argc, char** argv) {
	int n, m, u, v, c;
	while(scanf("%d%d", &n, &m) && (n+m)) {
		int ans1 = 0;
		int ans2 = 0;
		vector<pii> num;
		REP(i, 0, n) p1[i] = p2[i] = i;
		rep(i, 0, m) {
			scanf("%d%d%d", &u, &v, &c);
			num.pb(mk(c, mk(u, v)));
		}
		sort(all(num));
		rep(i, 0, m) {		// union
			int a = find1(num[i].S.F);
			int b = find1(num[i].S.S);
			c = num[i].F;
			if(a != b) {
				ans1 += c;
				p1[a] = b;
			}
		}
		reverse(all(num));
		rep(i, 0, m) {		// union
			int a = find2(num[i].S.F);
			int b = find2(num[i].S.S);
			c = num[i].F;
			if(a != b) {
				ans2 += c;
				p2[a] = b;
			}
		}
		printf("%d\n", abs(ans1 - ans2));
	}
	return 0;
}

