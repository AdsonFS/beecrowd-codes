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
#define MAX 2000010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef unsigned long long int ull;
vector<int> num;

int main(int argc, char ** argv) {
	int T, N, C, M, v;
	scanf("%d", &T);
	rep(j, 0, T) {
		scanf("%d%d%d", &N, &C, &M);
		int ans = 0;
		num.clear();
		rep(i, 0, M) {
			scanf("%d", &v);
			num.pb(v);
		}
		sort(all(num), greater<int>());
		int i = 0;
		while(i < M) {
			ans += num[i] * 2;
			i += C;
		}
		printf("%d\n", ans);
	}
	return 0;
}

