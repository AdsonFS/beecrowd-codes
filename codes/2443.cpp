#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 70
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int n = (a * d) + (c * b);
	int D = b * d;
	int tam = min(D, n);
	for(int i = tam; i >= 2; i--)
		if(D % i == 0 && n % i == 0) {
			D = D / i;
			n = n / i;
			break;
		}
	printf("%d %d\n", n, D);
	return 0;
}


