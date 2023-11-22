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
#define MAX 10010
#define S second
#define F first
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
	ll ans = 0;
	int n, k, v, c;
	set<int> list;
	vector<pii> num;
	scanf("%d", &n);
	REP(i, 0, n) p[i] = i;
	rep(i, 1, n) {
		scanf("%d", &k);
		while(k--) {
			scanf("%d%d", &v, &c);
			num.pb(pii(c, ii(i, v)));
		}
	}
	sort(all(num));			// crescente
	int tam = num.size();
	rep(i, 0, tam) {
		int a = find(num[i].S.F);
		int b = find(num[i].S.S);
		if(a != b) {
			ans += num[i].F;
			p[a] = b;
		}
	}
	REP(i, 1, n) list.insert(find(p[i]));
	printf("%d %lld\n", list.size(), ans);
	return 0;
}
