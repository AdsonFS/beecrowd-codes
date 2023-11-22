#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char * * argv) {
	int t, n, m, x;
	scanf("%d", &t);
	while(t--) {
		int pro = INF;
		int ind = -1;
		int ac = -1;
		int dif;
		scanf("%d%d", &n, &m);
		for(int i = 1; i <= n; i++) {
			scanf("%d", &x);
			if(ac == -1 && x == m) {
				ac = 1;
				printf("%d\n", i);
			}
			dif = abs(m - x);
			if(dif < pro) {
				pro = dif;
				ind = i;
			}
		}
		if(ac == -1)
			printf("%d\n", ind);
	}
	return 0;
}
