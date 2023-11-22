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
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int n, x;
char op;

int main(int argc, char** argv) {
	double ans = 1.0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d %c", &x, &op);
		ans = op == '*' ? ans * x : ans / x;
	}
	printf("%.0lf\n", ans);
	return 0;
}
