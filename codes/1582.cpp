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
	int x1, x2, x3;
	while(cin >> x1 >> x2 >> x3) {
		int mdc = __gcd(x1, x2);
		mdc = __gcd(mdc, x3);
		printf("tripla");
		vector<int> num;
		num.pb(x1); num.pb(x2); num.pb(x3);
		sort(all(num));
		if(num[2] * num[2] == (num[1] * num[1]) + (num[0] * num[0])) {
			printf(" pitagorica");
			if(mdc == 1)
				printf(" primitiva");
		}
		printf("\n");
	}
	return 0;
}
