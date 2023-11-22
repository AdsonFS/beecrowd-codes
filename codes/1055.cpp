#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 200010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef unsigned long long int ull;

int main(int argc, char ** argv) {
	int T, N, v, h = 0;
	scanf("%d", &T);
	rep(k, 0, T) {
		scanf("%d", &N);
		vector<int> num, a1, a2;
		int ans1 = 0, ans2 = 0;
		deque<int> dq;
		rep(i, 0, N) {
			scanf("%d", &v);
			num.pb(v);
		}
		sort(all(num));
		int i = 1, j = N-1;
		int m = 1;
		dq.pb(num[0]);
		while(i <= j) {
			if(m == 1) dq.pf(num[j--]), m++;
			else if(m == 2) dq.pb(num[j--]), m++;
			else if(m == 3) dq.pf(num[i++]), m++;
			else dq.pb(num[i++]), m = 1;
		}
		rep(i, 0, N) a1.pb(dq.front()), dq.pop_front();
		rep(i, 1, N) ans1 += abs(a1[i] - a1[i-1]);
		i = 0, j = N-2;
		m = 3;
		dq.pb(num[N-1]);
		while(i <= j) {
			if(m == 1) dq.pf(num[j--]), m++;
			else if(m == 2) dq.pb(num[j--]), m++;
			else if(m == 3) dq.pf(num[i++]), m++;
			else dq.pb(num[i++]), m = 1;
		}
		rep(i, 0, N) a2.pb(dq.front()), dq.pop_front();
		rep(i, 1, N) ans2 += abs(a2[i] - a2[i-1]);
		printf("Case %d: %d\n", ++h, max(ans1, ans2));
	}
	return 0;
}
