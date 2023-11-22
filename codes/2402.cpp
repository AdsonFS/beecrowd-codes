#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char * * argv) {
	ll n, m;
	scanf("%lld", &n);
	bool ok = false;
	if(n >= 4) {
		if(n % 2 == 0)
			ok = true;
		else {
			m = sqrt(n);
			for(int i = 3; i <= m; i += 2) {
				if(n % i == 0) {
					ok = true;
					break;
				}
			}
		}
	}
	if(ok) printf("S\n");
	else printf("N\n");
	return 0;
}
