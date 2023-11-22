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

int main(int argc, char * * argv) {
	int x0, y0, x1, y1, x2, y2, x3, y3;
	scanf("%d%d%d%d%d%d%d%d", &x0, &y0, &x1, &y1, &x2, &y2, &x3, &y3);
	bool ok = false;
	if (x1 < x2 || y1 < y2 || x3 < x0 || y3 < y0)
        ok = true;
	printf("%d\n", !ok);
	return 0;
}
