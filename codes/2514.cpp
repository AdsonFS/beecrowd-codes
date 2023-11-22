#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 510
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef pair<double, ii> pdi;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int a, b, c, m, mmc;
	while(scanf("%d", &m) != EOF) {
		scanf("%d%d%d", &a, &b, &c);
		mmc = (a * b) / __gcd(a, b);
		mmc = (mmc * c) / __gcd(mmc, c);
		printf("%d\n", mmc - m);
	}
	return 0;
}
