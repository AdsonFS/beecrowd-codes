#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

bool ver(int r, int n) {
	return (2 * r <= n);
}

int main(int argc, char** argv) {
	int l, c, r1, r2;
	while(scanf("%d%d%d%d", &l, &c, &r1, &r2) && (l+c) != 0) {
		double d2 = hypot(r1 - (c - r2), (l - r1) - r2);
		if(r1 + r2 <= d2 && ver(r1, l) && ver(r1, c) && ver(r2, l) && ver(r2, c))
			printf("S\n");
		else printf("N\n");
	}
	return 0;
}
