#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define MAX 1000000008
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

struct equi {
	int i, p, pa, pc, dif;
};

bool comp(const equi &x1, const equi &x2) {
	if(x1.p != x2.p)
		return (x1.p > x2.p);
	double ca1, ca2;
	if(x1.pc == 0) ca1 = x1.pa;
	else ca1 = (1.0 * x1.pa) / x1.pc;
	if(x2.pc == 0) ca2 = x2.pa;
	else ca2 = (1.0 * x2.pa) / x2.pc;
	if(ca1 != ca2)
		return (ca1 > ca2);
	if(x1.pa != x2.pa)
		return (x1.pa > x2.pa);
	return (x1.i < x2.i);
}

int main(int argc, char * * argv) {
	int n, r, x, y, z, w, h = 1;
	while(scanf("%d", &n) && n != 0) {
		r = (n * (n-1))/2;
		equi t;
		vector<equi> num;
		t.p = 0; t.pa = 0; t.pc = 0;
		for(int i = 1; i <= n; i++) {
			t.i = i;
			num.pb(t);
		}
		for(int i = 0; i < r; i++) {
			scanf("%d%d%d%d", &x, &y, &z, &w);
			num[x-1].pa += y; num[x-1].pc += w;
			num[z-1].pa += w; num[z-1].pc += y;
			if(y > w) {
				num[x-1].p += 2;
				num[z-1].p += 1;
			}
			else {
				num[z-1].p += 2;
				num[x-1].p += 1;
			}
		}
		sort(all(num), comp);
		if(h != 1) printf("\n");
		printf("Instancia %d\n", h++);
		printf("%d", num[0].i);
		for(int i = 1; i < n; i++)
			printf(" %d", num[i].i);
		printf("\n");
	}
	return 0;
}
