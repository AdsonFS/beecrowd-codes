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
#define MAX 200010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[MAX], pd[MAX];

int main(int argc, char** argv) {
	int n;
	int sum = 0;
	bool ok = true;
	scanf("%d", &n);
	map<int, bool> mapa;
	mapa[0] = true;
	REP(i, 1, n) {
		scanf("%d", &vet[i]);
		sum += vet[i];
		pd[i] = sum;
		mapa[sum] = true;
	}
	REP(i, 1, n) {
		pd[i+n] += vet[i];
		mapa[pd[i+n]] = true;
	}
	int mid = sum / 2;
	int ans = 0;
	if(sum % 2 != 0) ok = false;
	REP(i, 1, n) {
		if(pd[i] >= mid) break;
		// int p = pd[i-1];
		if(mapa[(pd[i] - vet[i]) + mid]) {
			ans++;
		}
	}
	// debug(ans);
	printf("%c\n", ans >= 2 && ok ? 'Y' : 'N');
	return 0;
}

/*
	
		// 1   3   4   3   3
		// 1   4   8   11  14

6
3    7   7    3   10   10
3    10  17   20  30   40 

*/










