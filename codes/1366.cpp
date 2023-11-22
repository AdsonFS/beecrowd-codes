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
int N, a, b;

int main(int argc, char ** argv) {
	while(scanf("%d", &N) && N) {
		int ans = 0;
		rep(i, 0, N) scanf("%d%d", &a, &b), ans += b/2;
		printf("%d\n", ans/2);
	}
	return 0;
}
