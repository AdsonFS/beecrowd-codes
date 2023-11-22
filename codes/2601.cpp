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
	int n;
	char c, b, x1, y1, x2, y2;
	scanf("%d", &n);
	while(n--) {
		scanf(" %c %c %c %c %c %c", &c, &x1, &y1, &x2, &y2, &b);
		int ans = 0, aux = 1;
		int p1, p2, p3;
		p1 = p2 = p3 = 0;
		if(c == '*') p1++;
		if(b == '*') p1++;
		if(x1 == '*') p2++;
		if(x2 == '*') p2++;
		if(y1 == '*') p3++;
		if(y2 == '*') p3++;
		if(p1 == 2) p1 = (2 * aux++);
		else p1 = 1;
		if(p2 == 2) p2 = (2 * aux++);
		else p2 = 1;
		if(p3 == 2) p3 = (2 * aux++);
		else p3 = 1;
		ans = p1 * p2 * p3;
		printf("%d\n", ans);
	}
	return 0;
}
