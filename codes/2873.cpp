#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 100010
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char ** argv) {
	int a, b, c, d;
	while(scanf("%d%d%d%d", &a, &b, &c, &d) && (a+b+c+d))
		printf("%.5lf\n", ((b + (a/2.0)) * c) / (d * 1.0));
	return 0;
}
