#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[MAX];
int t, n, h, best, cont, ans;

int main(int argc, char ** argv) {
	scanf("%d", &t);
	while(t--) {
		best = ans = -1;
		scanf("%d", &n);
		for (int i = 0; i < n; ++i) {
			scanf("%d", &vet[i]);
			best = max(best, vet[i]);
		}
		cont = 0;
		for (int i = 0; i < n; ++i) {
			if(vet[i] == best) cont++;
			else cont = 0;
			ans = max(ans, cont);
		}
		printf("Caso #%d: %d\n", ++h, ans);
	}
	return 0;
}
