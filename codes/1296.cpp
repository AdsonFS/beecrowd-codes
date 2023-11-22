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
double a, b, c;

int main(int argc, char** argv) {
	while(scanf("%lf%lf%lf", &a, &b, &c) != EOF) {
		double s = 0.5 * (a+b+c);
		double ans = s*(s-a)*(s-b)*(s-c);
		if(ans <= 0) printf("-1.000\n");
		else printf("%.3lf\n", (4/3.0)*sqrt(ans));
	}
	return 0;
}
