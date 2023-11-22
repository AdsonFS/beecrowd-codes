#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long int ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long ull;
ll v[MAX];

int main(int argc, char** argv) {
	int t, n, m, k, a, b, q;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		REP(i, 0, n) v[i] = 0;
		REP(i, 1, n) {
			scanf("%d", &m);
			rep(j, 0, m) {
				scanf("%d", &k);
				v[i] |= (1LL << (k-1));
			}
		}
		scanf("%d", &m);
		while(m--) {
			scanf("%d%d%d", &q, &a, &b);
			if(q == 1) printf("%d\n", __builtin_popcountll(v[a] & v[b]));
			else printf("%d\n", __builtin_popcountll(v[a] | v[b]));
		}
	}
	return 0;
}















