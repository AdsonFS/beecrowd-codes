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
#define pb push_back
#define pf push_front
#define mk make_pair
#define MAX 1000100
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
int vet[MAX];

int main(int argc, char** argv) {
	int n, k;
	while(scanf("%d%d", &n, &k) != EOF) {
		int ans = 0;
		rep(i, 0, n)
			scanf("%d", &vet[i]);
		sort(vet, vet + n, greater<int>());
		rep(i, 0, k) ans = (ans + vet[i] + 0) % mod;
		printf("%d\n", ans);
	}
	return 0;
}
