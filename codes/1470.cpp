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
vector<int> a, aa;
int N, x;

bool c(int i, int sz) { return (i >= 0 && i < sz); }

vector<int> dobrar(vector<int> b, int k) {
	vector<int> num;
	int sz = b.size();
	for(int i = k, j = k+1; c(i, sz) | c(j, sz); i--, j++)
		num.pb((c(i, sz) && c(j, sz)) ? b[i]+b[j] : c(i, sz) ? b[i] : b[j]);
	return num;
}

bool solve(vector<int> b) {
	if(b.size() < a.size()) return false;
	if(b == a || b == aa) return true;
	rep(i, 0, b.size()-1)
		if(solve(dobrar(b, i)))
			return true;
	return false;
}

int main(int argc, char ** argv) {
	vector<int> b;
	while(scanf("%d", &N) != EOF) {
		a.clear(); b.clear();
		rep(i, 0, N) scanf("%d", &x), b.pb(x);
		scanf("%d", &N);
		rep(i, 0, N) scanf("%d", &x), a.pb(x);
		aa = a; reverse(all(aa));
		printf("%s\n", solve(b) ? "S" : "N");
	}
	return 0;
}
