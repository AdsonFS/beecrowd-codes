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
int N, a, b, x1, x2;

int main(int argc, char ** argv) {
	while(scanf("%d", &N) && N) {
		rep(i, 0, N) scanf("%d%d", &x1, &x2), a += (x1 > x2), b += (x1 < x2);
		printf("%d %d\n", a, b);
		a = b = 0;
	}
	return 0;
}