#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int T, A, W, C;
	while(scanf("%d%d%d%d", &T, &A, &W, &C) != EOF) {
		double p = (100.0 * A) / T;
		if(p >= C) puts("critical");
		else if(p >= W) puts("warning");
		else puts("OK");
	}
	return 0;
}

