#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
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
ll vet[MAX];

int main(int argc, char** argv) {
	int n;
	while(scanf("%d", &n) && n) {
		ll ans = 0;
		rep(i, 0, n) scanf("%lld", &vet[i]);
		for(int i = n-1; i >= 0; i--) {
			ans += vet[i];
			for(int j = i-1; j >= 0; j--)
				vet[j] += vet[i];
		}
		printf("%lld\n", ans);
	}
	return 0;
}
