#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define MAX 1000000008
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
unsigned long long int pd[1010];

unsigned long long int calc(unsigned long long int n) {
	if(n == 0) return 1;
	if(pd[n] != 0) return pd[n];
	return pd[n] = (26 * (calc(n-1) % mod)) % mod;
}

int main(int argc, char * * argv) {
	string x1;
	while(cin >> x1) {
		int tam = x1.size() - 1;
		unsigned long long int n = 0;
		for(int i = tam, j = 0; i >= 0; i--, j++) {
			n += (((x1[i] - 65) % mod) * (calc(j) % mod)) % mod;
		}
		n = n % mod;
		cout << n << "\n";
	}
	return 0;
}
