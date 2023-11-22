#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
// #define MAX 99000000000
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	string x1;
	while(cin >> x1 && x1 != "00e0") {
		ll v = (((x1[0] - '0') * 10) + (x1[1] - '0')) * pow(10, (x1[3] - '0'));
		int l = (double)log(v)/log(2);
		// cout << l << "\n";
		printf("%lld\n", (2 * (v - (ll)pow(2, l))) + 1);
	}
	return 0;
}
