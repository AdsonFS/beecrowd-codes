#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char * * argv) {
	int n, x1, x2;
	char op;
	while(scanf("%d", &n) != EOF) {
		for(int i = 0; i < n; i++) {
			if(i < n - 1) {
				cin >> x1 >> op >> x2 >> op;
				if(x2 > 2)
					printf("%dx%d %c ", (x1 * x2), x2 - 1, op);
				else
					printf("%dx %c ", (x1 * x2), op);
			}
			else {
				cin >> x1 >> op >> x2;
				if(x2 > 2)
					printf("%dx%d\n", (x1 * x2), x2 - 1);
				else
					printf("%dx\n", (x1 * x2));
			}
		}
	}
	return 0;
}
