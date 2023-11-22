#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000005
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int n, m, c, x, h;

int main(int argc, char** argv) {
	scanf("%d", &n);
	while(n--) {
		scanf("%d%d", &m, &c);
		vector<int> lista[105];
		for(int i = 0; i < c; i++) {
			scanf("%d", &x);
			lista[x % m].pb(x);
		}
		if(h++) printf("\n");
		for(int i = 0; i < m; i++) {
			printf("%d -> ", i);
			int tam = lista[i].size();
			for(int j = 0; j < tam; j++)
				printf("%d -> ", lista[i][j]);
			printf("\\\n");
		}
	}
	return 0;
}