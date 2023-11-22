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
typedef pair<char, int> ci;
double s, x;
int c;

int main(int argc, char ** argv) {
	rep(i, 0, 6) {
		scanf("%lf", &x);
		if(x > 0) s += x, c++;
	}
	printf("%d valores positivos\n", c);
	printf("%.1lf\n", (1.0 * s) / c);
	return 0;
}
