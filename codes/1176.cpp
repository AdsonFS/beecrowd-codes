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
int T, x;
ll pd[66];

int main(int argc, char ** argv) {
	pd[1] = 1;
	scanf("%d", &T);
	rep(i, 2, 62) pd[i] = pd[i-1] + pd[i-2];
	rep(k, 0, T) {
		scanf("%d", &x);
		printf("Fib(%d) = %lld\n", x, pd[x]);
	}
	return 0;
}
