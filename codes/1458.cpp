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
typedef double lf;
typedef long long ll;
typedef pair<int, int> ii;
int v[] = {0, 0, 3, 3, 3, 3, 3, 4, 3, 4};
map<char, int> mp, cnt;
const int MAX = 405;
lf pd[MAX][12][12];
string s;

ii num[] = {
	mk(2, 3), mk(1, 6), mk(2, 6), mk(3, 6), mk(1, 5),
	mk(2, 5), mk(3, 5), mk(1, 4), mk(2, 4), mk(3, 4),
	mk(3, 3)
};

lf calc(int a, int b) {
	return hypot(num[a].F-num[b].F, num[a].S-num[b].S);
}

lf solve(int i, int e, int d) {
	if(i == (int)s.size()) return 0;
	lf &ans = pd[i][e][d];
	if(ans > -0.5) return ans;
	ans = solve(i+1, mp[s[i]], d) + calc(e, mp[s[i]]);
	ans = min(ans, solve(i+1, e, mp[s[i]]) + calc(d, mp[s[i]]));
	return ans;
}

int main(int argc, char ** argv) {
	char r[MAX];
	int ii = 1, jj = 2;
	for(char c = 'a'; c <= 'z'; c++) {
		mp[c] = jj; cnt[c] = ii++;
		if(ii > v[jj]) ii = 1, jj++;
	}
	mp[' '] = 0; cnt[' '] = 1;
	mp['#'] = 10; cnt['#'] = 1;
	while(gets(r)) {
		s.clear();
		int sz = strlen(r);
		int aux = cnt[r[0]];
		memset(pd, -1, sizeof pd);
		rep(i, 1, sz)
			aux += cnt[r[i]] + (mp[r[i]] == mp[r[i-1]]);
		rep(i, 0, sz) {
			if(i && mp[r[i]] == mp[r[i-1]]) s.pb('#');
			s.pb(r[i]);
		}
		printf("%.2lf\n", solve(0, 4, 6)/30.0 + aux*0.2);
	}
	return 0;
}
