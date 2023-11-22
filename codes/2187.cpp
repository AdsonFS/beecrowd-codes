#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int n, c, d, ci, h;

int main(int argc, char * * argv) {
	while(scanf("%d", &n) && n) {
		c = n / 50;
		n -= c * 50;
		d = n / 10;
		n -= d * 10;
		ci = n / 5;
		n -= ci * 5;
		printf("Teste %d\n", ++h);
		printf("%d %d %d %d\n\n", c, d, ci, n);
	}
	return 0;
}
