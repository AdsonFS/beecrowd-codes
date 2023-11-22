#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
bool pd[MAX][10100];
int vet[MAX];
int h;

int main(int argc, char * * argv) {
	int v1, v2, n;
	while(scanf("%d%d%d", &v1, &v2, &n) && (v1+v2+n)) {
		int sum = v1 + v2;
		for(int i = 1; i <= n; i++) {
			scanf("%d", &vet[i]);
			sum += vet[i];
		}
		sort(vet + 1, vet + n + 1);
		int w = (sum / 2) - max(v1, v2);
		for(int i = 0; i <= n; i++)
			pd[i][0] = true;
		for(int i = 1; i <= w; i++)
			pd[0][i] = false;
		for(int i = 1; i <= n; i++) {
			for(int j = 1; j <= w; j++) {
				bool e = pd[i-1][j];
				if(!e && vet[i] <= j)
					e = pd[i - 1][j - vet[i]];
				pd[i][j] = e;
			}
		}
		printf("Teste %d\n", ++h);
		if(pd[n][w] && sum % 2 == 0) printf("S\n\n");
		else printf("N\n\n");
	}
	return 0;
}

