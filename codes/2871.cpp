#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int pot[12];

int main(int argc, char** argv) {
	int n, m, x, sum;
	while(scanf("%d%d", &n, &m) != EOF) {
		sum = 0;
		int rep = n * m;
		for(int i = 0; i < rep; i++) {
			scanf("%d", &x);
			sum += x;
		}
		printf("%d saca(s) e %d litro(s)\n", sum / 60, sum % 60);
	}
	return 0;
}







