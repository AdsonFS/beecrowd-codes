#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first
typedef long long int ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long ull;

string esp(int k) {
	string ans;
	rep(i, 0, k) ans.pb(' ');
	return ans;
}

string z(int k) {
	string ans;
	rep(i, 0, k) ans.pb('0');
	return ans;
}

int main(int argc, char** argv) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	cout << "A = " << a << ", B = " << b << ", C = " << c << "\n";
	int la = (9 - (int)log10(abs(a)));
	if(a == 0) la = 9;
	int lb = (9 - (int)log10(b));
	if(b == 0) lb = 9;
	int lc = (9 - (int)log10(c));
	if(c == 0) lc = 9;
	
	if(a >= 0) {
		cout << "A = " << esp(la) << a << ", B = " << esp(lb) << b << ", C = " << esp(lc) << c << "\n";
		cout << "A = " << z(la) << a << ", B = " << z(lb) << b << ", C = " << z(lc) << c << "\n";
		cout << "A = " << a << esp(la) << ", B = " << b << esp(lb) << ", C = " << c << esp(lc) << "\n";
	}
	else {
	 cout << "A = " << esp(la-1) << a << ", B = " << esp(lb) << b << ", C = " << esp(lc) << c << "\n";
		cout << "A = -" << z(la-1) << abs(a) << ", B = " << z(lb) << b << ", C = " << z(lc) << c << "\n";
		cout << "A = " << a << esp(la-1) << ", B = " << b << esp(lb) << ", C = " << c << esp(lc) << "\n";
	}
	return 0;
}


