#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define PI 3.14159
#define g 9.80665
#define MAX 2100
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char ** argv) {
	int p1, p2, n;
	double h, a, v, t;
	double vy, vx, ans, delta;
	while(scanf("%lf", &h) != EOF) {
		scanf("%d%d", &p1, &p2);
		scanf("%d", &n);
		while(n--) {
			scanf("%lf%lf", &a, &v);
			vy = v * sin((a * PI) / 180);
			vx = v * cos((a * PI) / 180);
			delta = pow(vy, 2) + (4 * (g / 2) * h);
			t = (-vy - sqrt(delta)) / (-g);
			ans = vx * t;
			printf("%.5lf -> ", ans);
			if(ans >= p1 && ans <= p2) printf("DUCK\n");
			else printf("NUCK\n");
		}
	}
	return 0;
}
