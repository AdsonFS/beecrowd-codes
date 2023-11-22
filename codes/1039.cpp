#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char * * argv) {
	int r1, x1, y1, r2, x2, y2;
	while(scanf("%d%d%d%d%d%d", &r1, &x1, &y1, &r2, &x2, &y2) != EOF) {
		double d = hypot(x1 - x2, y1 - y2);
		if(r1 >= d + r2)
			printf("RICO\n");
		else
			printf("MORTO\n");
	}
	return 0;
}
