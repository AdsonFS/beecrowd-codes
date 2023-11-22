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
#define MOD 10000LL
#define pb push_back
#define pf push_front
#define mk make_pair
#define MAX 5010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
vector<int> num;

void divisor(int n) {
	for(int div = 2; div*div <= n; div++) {
		if(!(n % div)) {
			num.pb(div);
			int k = n / div;
			if(k != div) num.pb(k);
		}
	}
	sort(all(num));
}

int main(int argc, char** argv) {
	int a, b, c, d;
	scanf("%d%d%d%d", &a, &b, &c, &d);
	divisor(c);
	bool ok = false;
	int tam = num.size();
	rep(i, 0, tam) {
		int v = num[i];
		if(v % a == 0 && v % b != 0 && d % v != 0) {
			ok = true;
			printf("%d\n", v);
			break;
		}
	}
	if(!ok) puts("-1");
	return 0;
}
