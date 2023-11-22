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
const int mod = 1e8;
int pd[MAX][MAX][MAX];
int M, N, a, b;
vector<ii> num;

int solve(int i, int j, int k) {
	if(num[j].S == M) return 1;
	if(i == N || num[i].F >= num[j].S+1) return 0;
	int &ans = pd[i][j][k];
	if(ans != -1) return ans;
	ans = solve(i+1, j, k);
	if(num[i].F > num[k].S && num[i].S > num[j].S)
		ans = (ans + solve(i+1, i, j)) % mod;
	return ans;
}

int main(int argc, char ** argv) {
	while(scanf("%d%d", &M, &N) && N|M) {
		memset(pd, -1, sizeof pd);
		rep(i, 0, N) {
			scanf("%d%d", &a, &b);
			num.pb(mk(a, b));
		}
		int ans = 0;
		sort(all(num));
		num.pb(mk(0, 0));
		for(int i = 0; !num[i].F; i++)
			ans = (ans + solve(i+1, i, N)) % mod;
		printf("%d\n", ans);
		num.clear();
	}
	return 0;
}
