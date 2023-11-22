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
typedef pair<ii, int> pii;
const int MAX = 500;
int m[MAX][MAX];
vector<pii> num;
int p[MAX];

int find(int a) {
	if(p[a] == a) return a;
	return p[a] = find(p[a]);
}

bool cmp1(const pii &a, const pii &b) {
	return a.S > b.S;
}

bool cmp2(const pii &a, const pii &b) {
	return a.S < b.S;
}

int main(int argc, char ** argv) {
	int N, ans = 0;
	scanf("%d", &N);
	REP(i, 1, N) p[i] = i;
	REP(i, 1, N) REP(j, 1, N) scanf("%d", &m[i][j]);
	REP(i, 1, N) REP(j, i+1, N) if(m[j][i]) num.pb(mk(mk(i, j), m[i][j]));
	sort(all(num), cmp1);
	rep(i, 0, (int)num.size()) {
		int a = find(num[i].F.F);
		int b = find(num[i].F.S);
		if(a != b) p[a] = b;
		else ans += num[i].S;
	}
	num.clear();
	REP(i, 1, N) REP(j, i+1, N) if(!m[j][i]) num.pb(mk(mk(i, j), m[i][j]));
	sort(all(num), cmp2);
	rep(i, 0, (int)num.size()) {
		int a = find(num[i].F.F);
		int b = find(num[i].F.S);
		if(a != b) p[a] = b, ans += num[i].S;
	}
	printf("%d\n", ans);
	return 0;
}
