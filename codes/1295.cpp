#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
const int MAX = 1e5+5;
double a[MAX], b[MAX];
int N;

double pot(double x) { return x*x; }

int main(int argc, char** argv) {
	while(scanf("%d", &N) && N) {
		rep(i, 0, N)
			scanf("%lf%lf", &a[i], &b[i]);
		double ans = (1LL << 40);
		rep(i, 0, N)
			rep(j, i+1, N)
				ans = min(ans, pot(a[i] - a[j])  + pot(b[i] - b[j]));
		if(ans >= pot(10000)) puts("INFINITY");
		else printf("%.4lf\n", sqrt(ans));
	}
	return 0;
}
