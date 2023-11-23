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

ll fastpow(ll b, ll expo, ll mod) {
  ll ret = 1, pot = b % mod;
  while (expo) {
    if (expo & 1) {
      ret = (ret * pot) % mod;
    }
    pot = (pot * pot) % mod;
    expo >>= 1;
  }
  return ret;
}

int main(int argc, char ** argv) {
	int a;
	scanf("%d",&a);
 	printf("%lld\n",fastpow(3,a,(1LL<<31)-1));
	return 0;
}
