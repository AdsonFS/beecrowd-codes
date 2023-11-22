#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define MAX 1000000000000000001
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	int n, ax, ay, bx, by, cx, cy, dx, dy, rx, ry;
	scanf("%d", &n);
	while(n--) {
		scanf("%d%d%d%d%d%d%d%d%d%d", &ax, &ay, &bx, &by, &cx, &cy, &dx, &dy, &rx, &ry);
		if(rx >= ax && rx <= bx && ry >= ay && ry <= cy)
			printf("1\n");
		else
			printf("0\n");
	}
	return 0;
}
