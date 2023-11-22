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
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
string s1, s2, s;
ll pd[12][2];
ll dig[12];
ll mul[12];
int tam;

void zerar(string &S) {
	memset(dig, -1, sizeof(dig));
	memset(pd, -1, sizeof(pd));
	tam = S.size();
	s = S;
}

ll valor(int j) {
	if(j == tam-1) return 1;
	ll ans = 0;
	if(dig[j] != -1) return dig[j];
	for(ll i = tam-1, h = 1; i > j; i--, h *= 10)
		ans = (ans + (((s[i] - '0') * h) % mod)) % mod;
	return dig[j] = (ans + 1) % mod;
}

ll my_pow(int m) {
	if(mul[m] != 0) return mul[m];
	if(m == 0) return 1;
	return mul[m] = (10 * (my_pow(m-1) % mod)) % mod;
}

ll solve(int i, bool ok) {
	int ans = 0;
	int v = s[i] - '0';
	if(i == tam) return 0;
	if(pd[i][ok] != -1) return pd[i][ok];
	if(!ok) rep(j, 0, 10) ans = (ans + solve(i+1, 0) + ((j * my_pow(tam - 1 - i)) % mod)) % mod;
	else {
		rep(j, 0, v) ans = (ans + solve(i+1, 0) + ((j * my_pow(tam - 1 - i)) % mod)) % mod;
		ans = (ans + solve(i+1, 1) + ((v * valor(i)) % mod)) % mod;
	}
	return pd[i][ok] = ans % mod;
}

int main(int argc, char * * argv) {
	char aux[15];
	ll x1;
	while(cin >> x1 >> s2) {
		zerar(s2);
		ll v2 = solve(0, 1);
		x1--;
		sprintf(aux, "%lld", x1);
		s1 = aux;
		zerar(s1);
		ll v1 = solve(0, 1);
		printf("%lld\n", v2 - v1);
	}
	return 0;
}
