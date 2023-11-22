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
const int MAX = 2e5+5;

int main(int argc, char** argv) {
	int N, x, ma;
	scanf("%d%d", &N, &ma);
	rep(i, 1, N) {
	    scanf("%d", &x);
	    if(x > ma)
	        puts("N"), exit(0);
	}
	puts("S");
	return 0;
}