#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char * * argv) {
	int a, b, q, r;
	scanf("%d%d", &a, &b);
	r = abs(b);
	while(true) {
		r--;
		q = (a - r) / b;
		if(r == a - (b * q)) break;
	}
	printf("%d %d\n", q, r);
	return 0;
}
