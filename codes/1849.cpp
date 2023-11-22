#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char * * argv) {
	int X, Y, a;
	int ans = 0;
	int dx, dy, cx, cy;
	scanf("%d%d%d%d", &dx, &dy, &cx, &cy);
	X = max(dx, dy);
	dy = min(dx, dy);
	dx = X;
	
	X = max(cx, cy);
	cy = min(cx, cy);
	cx = X;
	
	// 1°
	X = dx + cy;
	Y = min(cy, dy);
	a = min(X, Y) * min(X, Y);
	ans = max(ans, a);
	// 2°
	X = dx + cx;
	Y = min(cy, dy);
	a = min(X, Y) * min(X, Y);
	ans = max(ans, a);
	// 3°
	X = dy + cy;
	Y = min(cx, dx);
	a = min(X, Y) * min(X, Y);
	ans = max(ans, a);
	// 4°
	X = dy + cx;
	Y = min(cy, dx);
	a = min(X, Y) * min(X, Y);
	ans = max(ans, a);
	printf("%d\n", ans);
	return 0;
}

