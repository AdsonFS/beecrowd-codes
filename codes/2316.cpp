#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1000002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int pos[101];

struct carro {
	int v, i, p, d;
};

bool comp(const carro &c1, const carro &c2) {
	if(c1.v != c2.v)
		return (c1.v > c2.v);
	if(c1.p != c2.p)
		return (c1.p < c2.p);
	return (c1.i < c2.i);
}

int main(int argc, char * * argv) {
	carro c;
	vector<carro> num;
	int k, n, m, x1, x2;
	scanf("%d%d%d", & k, & n, & m);
	c.v = 0; c.p = 0; c.d = 0;
	for(int i = 0; i <= n; i++) {
		c.i = i;
		num.pb(c);
	}
	while(m--) {
		scanf("%d%d", &x1, &x2);
		if(num[x1].d == x2 - 1 || (num[x1].d == k && x2 == 1)) {
			num[x1].d = x2;
			num[x1].v++;
			num[x1].p = pos[x2]++;
		}
	}
	num.erase(num.begin());
	sort(all(num), comp);
	printf("%d", num[0].i);
	for(int i = 1; i < n; i++)
		printf(" %d", num[i].i);
	printf("\n");
	return 0;
}
