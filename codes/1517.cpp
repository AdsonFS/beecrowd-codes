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
typedef pair<int, ii> pii;

int main(int argc, char ** argv) {
	int N, M, K, x, y;
	while(scanf("%d%d%d", &N, &M, &K) && N|M|K) {
		vector<int> pd(K+1, -(1<<30));
		vector<pii> num(K);
		for(pii &p : num)
			scanf("%d%d%d", &p.S.F, &p.S.S, &p.F);
		scanf("%d%d", &x, &y);
		num.pb(mk(0, mk(x, y)));
		sort(all(num));
		int ans = 0;
		pd[0] = 0;
		REP(i, 0, K) {
			rep(j, 0, i)
				if(max(abs(num[i].S.F-num[j].S.F), abs(num[i].S.S-num[j].S.S)) <= num[i].F-num[j].F)
					pd[i] = max(pd[i], pd[j]+1);
			ans = max(ans, pd[i]);
		}
		printf("%d\n", ans-0);		
	}
	return 0;
}
