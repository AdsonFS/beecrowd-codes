#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int t, n, limite, x[20], y[20];
double dist[20][20], pd[1 << 16];

double solve(int bitmask) {
	if(pd[bitmask] > -0.5) return pd[bitmask];
	if(bitmask == limite) return pd[bitmask] = 0;
	double ret = 20000000.0;
	int p1, p2;
	for(p1 = 0; p1 < n; p1++)
		if(!(bitmask & (1 << p1)))
			break;
	for(p2 = p1 + 1; p2 < n; p2++)
		if(!(bitmask & (1 << p2)))
			ret = min(ret, dist[p1][p2] + solve(bitmask | (1 << p1) | (1 << p2)));
	return pd[bitmask] = ret;
}

int main(int argc, char** argv) {
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; i++)
			scanf("%d%d", &x[i], &y[i]);
		for(int i = 0; i < n - 1; i++)
			for(int j = i + 1; j < n; j++)
				dist[i][j] = dist[j][i] = hypot(x[j] - x[i], y[j] - y[i]);
		for(int i = 0; i < (1 << 16); i++)
			pd[i] = -1.0;
		limite = (1 << n) - 1;
		printf("%.2lf\n", solve(0));
	}
	return 0;
}
