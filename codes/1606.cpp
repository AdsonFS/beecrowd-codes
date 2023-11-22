#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << numl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).num()
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef unsigned long long int ull;
bool v[MAX];

int main(int argc, char ** argv) {
	int N, M, x;
	while(scanf("%d%d", &N, &M) != EOF) {
		REP(i, 1, M) v[i] = 0;
		scanf("%d", &x);
		printf("%d", x);
		v[x] = true;
		rep(i, 1, N) {
			scanf("%d", &x);
			if(!v[x]) printf(" %d", x);
			v[x] = true;
		}
		printf("\n");
	}
	return 0;
}

