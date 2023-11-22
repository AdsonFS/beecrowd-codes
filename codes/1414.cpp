#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 998244353
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
typedef pair<int, pair<int, char> > pci;

int solve(int sum, int m) {
	REP(i, 0, m) {
		int e = i * 2;
		int r = sum - e;
		if(r % 3 == 0 && r / 3 == (m-i)) return i;
	}
	return -1;
}

int main(int argc, char** argv) {
	char l[20];
	int N, M, x, sum;
	while(scanf("%d%d", &N, &M) && N) {
		sum = 0;
		while(N--) {
			scanf(" %s %d", l, &x);
			sum += x;
		}
		printf("%d\n", solve(sum, M));
	}
	return 0;
}

