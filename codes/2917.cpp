#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define MOD 1000000007
#define pb push_back
#define pf push_front
#define mk make_pair
#define MAX 1000010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
int vet[MAX], pd[MAX];

int main(int argc, char** argv) {
	int n;
	while(scanf("%d", &n) != EOF) {
		n *= 10;
		int ans = 0;
		int now = 0;
		rep(i, 0, n) {
			scanf("%d", &vet[i]);
			now = max(0, now + vet[i]);
			pd[i] = now;
		}
		int ind = 0;
		for(int i = n-1; i >= 0; i--)
			if(pd[i] == 0) {
				ind = i;
				break;
			}
		now = 0;
		bool ok = false;
		for(int i = ind; i < INF; i++) {
			int j = i % n;
			if(j == ind && ok) break;
			now = max(0, now + vet[j]);
			ans = max(ans, now);
			ok = true;
		}
		printf("%d\n", ans);
	}
	return 0;
}

