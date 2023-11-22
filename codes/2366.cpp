#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n, m, x;
	vector<int> num;
	scanf("%d%d", &n, &m);
	num.pb(0);
	rep(i, 0, n) {
		scanf("%d", &x);
		num.pb(x);
	}
	num.pb(42195);
	bool ok = true;
	n = num.size();
	rep(i, 1, n)
		if(num[i] - num[i-1] > m) ok = false;
	printf("%c\n", ok ? 'S' : 'N');
	return 0;
}
