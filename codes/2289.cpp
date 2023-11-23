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
#define MAX 70
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
string x1, x2;
int t1, t2, T;

void bin1(ull n) {
	ull q = n / 2;
	ull r = n - (q * 2);
	if(q) bin1(q);
	x1 += (r + '0');
}

void bin2(ull n) {
	ull q = n / 2;
	ull r = n - (q * 2);
	if(q) bin2(q);
	x2 += (r + '0');
}

int main(int argc, char** argv) {
	ull v1, v2;	
	while(cin >> v1 >> v2 && (v1+v2)) {
		x1.clear(); x2.clear();
		bin1(v1); bin2(v2);
		t1 = x1.size(); t2 = x2.size();
		// /*
		if(t1 < t2) {
			int tam = t2 - t1;
			for(int i = 0; i < tam; i++)
				x1 = "0" + x1;
		}
		if(t1 > t2) {
			int tam = t1 - t2;
			for(int i = 0; i < tam; i++)
				x2 = "0" + x2;
		}
		// */
		T = max(t1, t2);
		int ans = 0;
		// cout << x1 << "\n" << x2 << endl;
		for(int i = 0; i < T; i++)
			if(x1[i] != x2[i]) ans++;
		printf("%d\n", ans);
	}
	return 0;
}
