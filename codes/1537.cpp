#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
const int MOD = 1e9+9;
const int MAX = 1e5+5;
ll fat[MAX];

int main(int argc, char ** argv) {
	cerr << 1000000009 << endl;
	cerr << MOD << endl;
	int N;
	fat[3] = 1;
	for(int i = 4; i<MAX; i++)
		fat[i]= (i * fat[i-1]) % MOD;
	while(scanf("%d", &N) && N)
		printf("%lld\n", fat[N]);
	return 0;
}
