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
int T, x, s;

int main(int argc, char ** argv) {
	scanf("%d", &T);
	rep(k, 0, T) {
		s = 0;
		scanf("%d", &x);
		rep(i, 1, x) s += !(x%i) ? i : 0;
		printf("%d%s eh perfeito\n", x, s != x ? " nao" : "");
	}
	return 0;
}
