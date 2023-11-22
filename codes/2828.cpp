#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

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
	unsigned long long int N, p, ini, aux, res, pd[100003];
	pd[0] = 1;
	for(int i = 1; i <= 100002; i++)
		pd[i] = (pd[i - 1] * i) % mod;
	char c;
	vector<char> num;
	while(cin >> c)
		num.pb(c);
	sort(all(num));
	
	p = 1;
	ini = 0;
	N = num.size();
	num.pb('Z');
	for(int i = 0; i < N; i++){
		if(num[i] != num[i+1]) {
			p = (p * pd[i - ini + 1]) % mod;
			ini = i+1;
		}
	}
	aux = fast_pow(p, mod - 2);
	
	res = ((pd[N]) * aux) % mod;
	cout << res  << endl;

	return 0;
}
