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
typedef pair<ll, ll> pl;
typedef pair<int, int> ii;
const int MAX = 1e5+5;
vector<ll> M, B;
int Q, N, p;
pl a[MAX];

bool bad(int l1, int l2, int l3) {
	return (B[l3]-B[l1])*(M[l1]-M[l2])<(B[l2]-B[l1])*(M[l1]-M[l3]);
}

void add(ll m, ll b) {
	M.pb(m); B.pb(b);
	int sz = M.size();
	while(sz >= 3 && bad(sz-3, sz-2, sz-1)) {
		M.erase(M.end()-2); B.erase(B.end()-2);
		sz = M.size();
	}
}

ll query(ll x) {
	int sz = M.size();
	p = min(p, sz-1);
	while(p < sz-1 && M[p+1]*x+B[p+1] >= M[p]*x+B[p]) p++;
	return M[p]*x+B[p];
}

int main(int argc, char ** argv) {
	scanf("%d", &Q);
	rep(q, 0, Q) {
		scanf("%d", &N);
		rep(i, 0, N) scanf("%lld%lld", &a[i].F, &a[i].S);
		ll cost = 0;
		add(0, 0);
		rep(i, 0, N) {
			if(!a[i].F) continue;
			cost = query(a[i].F);
			add(a[i].F, cost - a[i].S - a[i].F*a[i].F);
		}
		cost -= a[N-1].S;
		printf("%s %lld\n", cost > 0 ? "Ganha" : "Perde", abs(cost));
		M.clear(); B.clear(); p = 0;
	}
	return 0;
}
