#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main() {
	int n;
	while(scanf("%d", &n) && n != 0) {
		int p = 0, f = 0, c = 1;
		while(n > 0) {
			p++;
			n--;
			if(n - c > 0)
				f += c;
			else {
				f += c;
				p -= c - n;
			}
			n -= c;
			c++;
			// cout << "pica-pau = " << p << "  =======  " << "fink = " << f << "  =======  " << n << endl;
		}
		
		printf("%d %d\n", f, p);
	}
	return 0;
}
