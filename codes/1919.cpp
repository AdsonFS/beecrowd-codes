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
#define pb push_back
#define pf push_front
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
vector<int> num;
int n, k;
int ans;
bool ok;

int valor(vector<int> &v) {
	return (v[0] * 10000) + (v[1] * 1000) + (v[2] * 100) + (v[3] * 10) + v[4]; 
}

void aux(int bitmask, vector<int> v) {
	if(bitmask == (1 << 5) - 1) ans += valor(v);
	for(int i = 0; i < 5; i++) {
		if(!(bitmask & (1 << i))) {
			vector<int> V = v;
			V.pb(num[i]);
			aux(bitmask | (1 << i), V);
		}
	}
}

void solve(int bitmask, int last, int m) {
	if(m == 5) {
		ans = 0;
		num.clear();
		vector<int> v;
		for(int i = 0; i <= 9; i++)
			if(bitmask & (1 << i)) num.pb(i);
		aux(0, v);
		if(ans == k) {
			ok = true;
			printf("{%d", num[0]);
			for(int i = 1; i < 5; i++)
				printf(",%d", num[i]);
			printf("}\n");
		}
		return;
	}
	for(int i = last+1; i <= 9; i++) {
		if(!(bitmask & (1 << i)))
			solve(bitmask | (1 << i), i, m+1);
	}
	
}

int main(int argc, char** argv) {
	scanf("%d", &n);
	while(scanf("%d", &k) != EOF) {
		solve(0, -1, 0);
		if(!ok) printf("impossivel\n");
		printf("\n");
		ok = false;
	}
	return 0;
}

