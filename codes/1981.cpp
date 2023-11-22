#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 100000007
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 10010
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

unsigned long long int fast_pow(unsigned long long int b, unsigned long long int p) {
	if (p == 0) return 1;
	if (p == 1) return b;
	if (p % 2 == 0) {
		unsigned long long int ret = fast_pow(b, p / 2);
		return ( ret * ret ) % mod;
	} else {
		return ( fast_pow(b, p - 1) * b ) % mod;
	}
}

int main(int argc, char * argv[]) {
	unsigned long long int aux, res, pd[100003];
	pd[0] = 1;
	for(int i = 1; i <= 100002; i++)
		pd[i] = (pd[i - 1] * i) % mod;
	char str[MAX];
	while(scanf(" %s", str)) {
		aux = 1;
		if(strcmp(str, "0") == 0) break;
		map<char, int> mapa;
		map<char, int> :: iterator it;
		int tam = strlen(str);
		for(int i = 0; i < tam; i++)
			mapa[str[i]]++;
		for(it = mapa.begin(); it != mapa.end(); it++)
			aux = (aux * pd[it->S]) % mod;
		aux = fast_pow(aux, mod - 2);
		res = (pd[tam] * aux) % mod;
		cout << res  << endl;
	}
	return 0;
}
