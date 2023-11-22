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
	int a, b, c, d, e, f;
	scanf("%d%d%d", &a, &b, &c);
	scanf("%d%d%d", &d, &e, &f);
	printf("%d\n", max(0, d-a) + max(0, e-b) + max(0, f-c));
	return 0;
}
