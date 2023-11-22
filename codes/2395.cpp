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
#define MAX 10010
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char ** argv) {
	ull a, b, c, x, y, z;
	scanf("%llu%llu%llu%llu%llu%llu", &a, &b, &c, &x, &y, &z);
	ull v1 = (x / a) * (y / b) * (z / c);
	printf("%llu\n", v1);
	return 0;
}


