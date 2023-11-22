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
#define S second
#define F first
#define MAX 1010
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int p[MAX];

int find(int a) {
	if(p[a] == a) return a;
	return p[a] = find(p[a]);
}

int main(int argc, char** argv) {
	int n, m, u, v, w;
	while(scanf("%d%d", &n, &m) != EOF) {
		int ans = 0;
		int edge = 0;
		vector<pii> num;
		REP(i, 0, n) p[i] = i;
		rep(i, 0, m) {
			scanf("%d%d%d", &u, &v, &w);
			num.pb(pii(w, ii(u, v)));
		}
		sort(all(num));
		rep(i, 0, m) {
			int a = find(num[i].S.F);
			int b = find(num[i].S.S);
			if(a != b) {
				edge++;
				p[a] = b;
				ans += num[i].F;
			}
		}
		if(edge == n-1) printf("%d\n", ans);
		else printf("impossivel\n");
	}
	return 0;
}
