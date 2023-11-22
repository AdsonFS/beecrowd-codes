#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char ** argv) {
	int x0, y0, x1, y1, v, r1, r2;
	while(scanf("%d%d%d%d%d%d%d",  &x0, &y0, &x1, &y1, &v, &r1, &r2) != EOF) {
		double dist = hypot(x1 - x0, y1 - y0) + (v * 1.5) - (r1 + r2);
		printf("%c\n", dist <= 0.000001 ? 'Y' : 'N');
	}
	return 0;
}
