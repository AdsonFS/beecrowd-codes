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
#define MAX 100010LL
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[MAX];
ll bit[MAX];
int n;

void update(int i) {
	for(; i <= n; i += i&-i)
		bit[i] += 1;
}

int query(int i) {
	int sum = 0;
	for(; i; i -= i&-i)
		sum += bit[i];
	return sum;
}

int main(int argc, char** argv) {
	while(scanf("%d", &n) != EOF) {
		ll ans = 0;
		REP(i, 1, n) 
			scanf("%d", &vet[i]), bit[i] = 0;
		bit[n+1] = bit[0] = 0;
		for(int i = n; i > 0; i--) {
			ans += query(n) - query(vet[i]);
			update(vet[i]);
		}
		printf("%lld\n", ans);
	}
	return 0;
}
