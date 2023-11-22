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
#define MAX 100
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int dateToInt (int m, int d, int y){
	return 1461 * (y + 4800 + ( m - 14) / 12) / 4 + 367 * (m - 2 - (
		m - 14) / 12 * 12) / 12 - 3 * ((y + 4900 + ( m - 14) / 12) / 100) / 4 +
		d - 32075;
}

int main(int argc, char** argv) {
	int n, a1, m1, d1, a2, m2, d2;
	scanf("%d", &n);
	char l;
	while(n--) {
		scanf("%d %c %d %c %d", &a1, &l, &m1, &l, &d1);
		scanf("%d %c %d %c %d", &a2, &l, &m2, &l, &d2);
		printf("%d\n", abs(dateToInt(m1, d1, a1) - dateToInt(m2, d2, a2)));
	}
	return 0;
}
