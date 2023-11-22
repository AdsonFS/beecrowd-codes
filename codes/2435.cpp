#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;

int main(int argc, char** argv) {
	int a, b, d1, d2, v1, v2;
	scanf("%d%d%d", &a, &d1, &v1);
	scanf("%d%d%d", &b, &d2, &v2);
	if((1.0 * d1) / v1 < (1.0 * d2) / v2) printf("%d\n", a);
	else printf("%d\n", b);
	return 0;
}
