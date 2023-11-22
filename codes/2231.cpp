#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[MAX];
int n, m, h, x;
int ma, me;

int main(int argc, char * * argv) {
	while(scanf("%d%d", &n, &m) && (n+m)) {
		for(int i = 1; i <= n; i++) {
			scanf("%d", &x);
			vet[i] = vet[i-1] + x;
		}
		ma = -INF;
		me = INF;
		for(int i = m; i <= n; i++) {
			ma = max(ma, (vet[i] - vet[i -m])/m);
			me = min(me, (vet[i] - vet[i -m])/m);
		}
		printf("Teste %d\n%d %d\n\n", ++h, me, ma);
	}
	return 0;
}


