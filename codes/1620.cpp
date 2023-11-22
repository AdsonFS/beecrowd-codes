#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;


int main(int argc, char** argv){
	long double x, l, i;
	cout << fixed << setprecision(6);
	while(cin >> l && l != 0) {
		i = l + (l - 3.0);
		x = (i - l) / (l * 1.0);
		cout << x << "\n";
	}
	return 0;
}
