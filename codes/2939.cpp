#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
const int MAX = 1e6+6;
ll pd[MAX];
int N;

int main(int argc, char ** argv) {
	ll mod = 1e9+7;
	scanf("%d", &N);
	pd[N] = 1; pd[N+1] = pd[N+2] = 0;
	PER(i, N-1, 0) {
		ll v = N-i;
		pd[i] = (v*2LL*pd[i+1]) % mod;
		pd[i] = (pd[i] + (( ((4LL*v)%mod) * ( ((v-1)*pd[i+2]) % mod)) % mod)) % mod;
	}
	cout << pd[0] << endl;
	return 0;
}
