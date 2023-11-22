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
#define MAX 100
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	string x1, x2, x3, x4;
	cin >> x1 >> x2 >> x3 >> x4;
	int t = x1.size() - 1;
	int f = ((x1[0] - '0') * 1000) + ((x2[0] - '0') * 100);
	f += ((x3[0] - '0') * 10) + (x4[0] - '0');
	int l = ((x1[t] - '0') * 1000) + ((x2[t] - '0') * 100);
	l += ((x3[t] - '0') * 10) + (x4[t] - '0');
	REP(i, 1, t-1) {
		int v = ((x1[i] - '0') * 1000) + ((x2[i] - '0') * 100);
		v += ((x3[i] - '0') * 10) + (x4[i] - '0');
		printf("%c", (char)((f * v + l) % 257));
	}
	printf("\n");
	return 0;
}
