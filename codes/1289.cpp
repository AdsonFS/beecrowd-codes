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
int T, N, K;
double P;

int main(int argc, char ** argv) {
	scanf("%d", &T);
	rep(t, 0, T) {
		double ans = 0;
		double prob = 1.00;
		double aux = 1.00;
		scanf("%d %lf %d", &N, &P, &K);
		rep(i, 1, K) aux *= (1.00-P);
		rep(i, 0, N) prob *= (1.00-P);
		rep(i, 0, 10000) {
			ans += aux * P;
			aux *= prob;
		}
		printf("%.4lf\n", ans);
	}
	return 0;
}
