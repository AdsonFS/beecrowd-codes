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
	int x1, y1, x2, y2;
	while(scanf("%d%d%d%d", &x1, &y1, &x2, &y2) && x1+x2+y1+y2) {
		if(x1 == x2 && y1 == y2) puts("0");
		else if(x1 == x2 || y1 == y2) puts("1");
		else if(x1+y1 == x2+y2 || abs(x1-x2) == abs(y1-y2)) puts("1");
		else puts("2");
	}
	return 0;
}
