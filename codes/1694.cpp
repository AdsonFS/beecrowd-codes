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
const int MAX = 55;
int s[MAX][MAX];
int p[MAX*MAX];
ll C[MAX][MAX];
int N, M, K;

void crivo() {
	p[0] = p[1] = 1;
	rep(i, 2, MAX*MAX) {
		if(p[i]) continue;
		for(int j = i*i; j < MAX*MAX; j += i)
			p[j] = 1;
	}
}

int q(int y1, int x1, int y2, int x2) {
	return (s[y2][x2] + s[y1-1][x1-1] - s[y2][x1-1] - s[y1-1][x2]);
}

int main(int argc, char ** argv) {
	crivo();
	rep(i, 0, MAX) {
		C[i][0] = C[i][i] = 1;
		rep(j, 1, i)
			C[i][j] = C[i-1][j-1] + C[i-1][j];
	}
	while(scanf("%d%d%d", &N, &M, &K) && N|M|K) {
		ll ans = 0;
		int cnt = 0;
		memset(s, 0, sizeof s);
		REP(i, 1, N) REP(j, 1, M)
			s[i][j] = s[i-1][j] + s[i][j-1] - s[i-1][j-1] + p[cnt++];
		if(K == 1) ans += s[N][M];
		else {
			REP(i, 1, N) {
				int query = q(i, 1, i, M);
				if(query < K) continue;
				ans += C[query][K];
			}
			REP(i, 1, M) {
				int query = q(1, i, N, i);
				if(query < K) continue;
				ans += C[query][K];
			}
		}
		printf("%lld\n", ans);
	}
	return 0;
}
