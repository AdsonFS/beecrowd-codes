#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n, x, y, u, v, x1, y1, x2, y2, h = 0;
	while(scanf("%d", &n) && n != 0) {
		x = -INF; y = INF; u = INF; v = -INF;
		for(int i = 0; i < n; i++){
			scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
			x = max(x, x1);
			y = min(y, y1);
			u = min(u, x2);
			v = max(v, y2);
		}
		printf("Teste %d\n", ++h);
		if(x <= u && y >= v) printf("%d %d %d %d\n", x, y, u, v);
		else printf("nenhum\n");
		printf("\n");
	}
	return 0;
}
