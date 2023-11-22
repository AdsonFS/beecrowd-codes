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
	int x1, x2, n, h = 0;
	while(scanf("%d", &n) && n != 0) {
		vector<int> num;
		for(int i = 0; i < n; i++) {
			scanf("%d%d", &x1, &x2);
			num.pb(x1 - x2);
		}
		int now, best, ini = 1, fim = 1, in, f;
		now = best = 0;
		int cont = 0;
		for(int i = 0; i < n; i++) {
			if(now + num[i] >= 0) {
				now += num[i];
				fim = i + 1;
			}
			else {
				now = 0;
				ini = i + 2;
			}
			if(now > best) {
				best = now;
				in = ini;
				f = fim;
				cont = fim - ini;
			}
			if(now == best && fim - ini > cont) {
				best = now;
				in = ini;
				f = fim;
				cont = fim - ini;
			}
		}
		printf("Teste %d\n", ++h);
		if(best <= 0) printf("nenhum\n\n");
		else printf("%d %d\n\n", in, f);
	}
	return 0;
}
