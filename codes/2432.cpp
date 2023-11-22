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
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
vector<int> num;
int n, m, x, y;
double r;

int busca(int ini, int fim) {
	int mid = (ini + fim) / 2;
	if(r <= num[mid] && r > num[mid-1])
		return n - mid - 1;
	if(r > num[mid])
		return busca(mid+1, fim);
	return busca(ini, mid-1);
}

int main(int argc, char** argv) {
	scanf("%d%d", &n, &m);
	num.pb(-1);
	rep(i, 0, n) {
		scanf("%d", &x);
		num.pb(x);
	}
	ll ans = 0;
	num.pb(INF);
	n = num.size();
	while(m--) {
		scanf("%d%d", &x, &y);
		r = hypot(x, y);
		ans += busca(0, n-1);
	}
	printf("%lld\n", ans);
	return 0;
}

