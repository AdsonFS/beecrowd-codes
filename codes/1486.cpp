#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[MAX][MAX];

int main(int argc, char ** argv) {
	int m, n, c, ans, cont;
	while(scanf("%d%d%d", &m, &n, &c) && (m+n+c)) {
		ans = 0;
		bool ok;
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < m; j++)
				scanf("%d", &vet[i][j]);
		}
		for(int j = 0; j < m; j++) {
			cont = 0;
			ok = true;
			for(int i = 0; i < n; i++) {
				if(vet[i][j] == 1) cont++;
				else {
					cont = 0;
					ok = true;
				}
				if(cont >= c && ok) {
					ok = false;
					ans++;
				}
			}
			if(cont >= c && ok) {
				ok = false;
				ans++;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
