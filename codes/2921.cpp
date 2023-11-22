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
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
int N, mat[MAX][MAX];
ll pd[MAX];

ll Kadane2D() {
	ll x1, y1, x2, y2;
	ll ret = 0, aux;
	rep(left, 0, N) {
		rep(i, 0, N) pd[i] = 0;
		rep(right, left, N) {
			rep(i, 0, N) pd[i] += mat[i][right];
			ll sum = aux = 0;
			rep(i, 0, N) { // Kadane1D
				sum += pd[i];
				if(sum > ret) ret = sum, x1 = aux, y1 = left, x2 = i, y2 = right;
				if(sum < 0) sum = 0, aux = i + 1;
			}
		}
	}
	return ret;
}

int main(int argc, char** argv) {
	while(scanf("%d", &N) != EOF) {
		rep(i, 0, N) rep(j, 0, N) scanf("%d", &mat[i][j]);
		printf("%lld\n", Kadane2D());
	}
	return 0;
}
