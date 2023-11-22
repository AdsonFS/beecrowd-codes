#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000011
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char * * argv) {
	int p, r, n, j, x, a, h = 1;
	while(scanf("%d%d", &p, &r) && (p+r) != 0) {
		vector<int> num[102];
		for(int i = 0; i < p; i++) {
			scanf("%d", &x);
			num[0].pb(x);
		}
		a = 1;
		while(a <= r) {
			scanf("%d%d", &n, &j);
			for(int i = 0; i < n; i++) {
				scanf("%d", &x);
				if(x == j)
					num[a].pb(num[a-1][i]);
			}
			a++;
		}
		printf("Teste %d\n%d\n\n", h++, num[a-1][0]);
	}
	
	return 0;
}
