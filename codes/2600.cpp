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

bool v(int x, int y, int z) {
	return (x >= 1 && x <= 6 && y >= 1 && y <= 6 && z >= 1 && z <= 6);
}

int main(int argc, char ** argv) {
	int n;
	int c, b, x1, y1, x2, y2;
	scanf("%d", &n);
	while(n--) {
		scanf("%d%d%d%d%d%d", &c, &x1, &y1, &x2, &y2, &b);
		set<int> num;
		num.insert(c); num.insert(x1); num.insert(x2);
		num.insert(b); num.insert(y2); num.insert(y1);
		if(c + b == 7 && x1 + x2 == 7 && y1 + y2 == 7
			&& v(c, x1, y1) && v(x2, y2, b) && num.size() == 6) printf("SIM\n");
		else printf("NAO\n");
	}
	return 0;
}
