#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 5010
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char ** argv) {
	string x1, x2;
	cin >> x1 >> x2;
	vector<string> num;
	num.pb(x1);num.pb(x2);
	sort(all(num));
	printf("%s\n%s\n", num[0].c_str(), num[1].c_str());
	return 0;
}
