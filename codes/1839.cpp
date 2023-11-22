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
const int MOD = 1e9+7;
const int MAX = 55;
ll fat[MAX*MAX];
char m[MAX][MAX];
int s[MAX][MAX];

ll ft(ll b, ll expo, ll mod) {
    ll ret = 1, pot = b % mod;
    while(expo) {
        if(expo & 1)
            ret = (ret * pot) % mod;
        pot = (pot * pot) % mod;
        expo >>= 1;
    }
    return ret;
}

void troca(int a, int b) { if(a > b) swap(a, b); }

int q(int x1, int y1, int x2, int y2) {
	return(s[y2][x2] - s[y2][x1-1] - s[y1-1][x2] + s[y1-1][x1-1]);
}

int main(int argc, char ** argv) {
	int x1, y1, x2, y2;
	int N, M;
	fat[0] = 1;
	rep(i, 1, MAX*MAX) 
		fat[i] = (fat[i-1] * i) % MOD; 
	scanf("%d%d", &N, &M);
	rep(i, 0, N) scanf(" %s", m[i]);
	REP(i, 1, N) REP(j, 1, M)
		s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + (m[i-1][j-1] == '#');
	while(scanf("%d%d%d%d", &x1, &y1, &x2, &y2) != EOF) {
		troca(x1, x2); troca(y1, y2);
		swap(x1, y1); swap(x2, y2);
		int tam = (y2-y1+1)*(x2-x1+1);
		ll ans1 = ft(fat[tam-q(x1, y1, x2, y2)], MOD-2, MOD);
		ll ans2 = ft(fat[q(x1, y1, x2, y2)], MOD-2, MOD);
		ll ans = (((fat[tam] * ans1)%MOD) * ans2) % MOD;
		printf("%lld\n", (ans - 1 + MOD) % MOD);
	}
	return 0;
}









