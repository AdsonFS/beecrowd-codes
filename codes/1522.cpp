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
typedef pair<int, ll> il;
const int MAX = 1e2+5;
bool pd[MAX][MAX][MAX];
int N, m[MAX][5];

bool solve() {
	memset(pd, 0, sizeof pd);
	pd[1][1][1] = 1;
	REP(a, 1, N+1) REP(b, 1, N+1) REP(c, 1, N+1) {
		if(!pd[a][b][c]) continue;
		if(!(m[a][1]%3)) pd[a+1][b][c] = 1;
		if(!(m[b][2]%3)) pd[a][b+1][c] = 1;
		if(!(m[c][3]%3)) pd[a][b][c+1] = 1;
		if(!((m[a][1]+m[b][2])%3)) pd[a+1][b+1][c] = 1;
		if(!((m[a][1]+m[c][3])%3)) pd[a+1][b][c+1] = 1;
		if(!((m[b][2]+m[c][3])%3)) pd[a][b+1][c+1] = 1;
		if(!((m[a][1]+m[b][2]+m[c][3])%3)) pd[a+1][b+1][c+1] = 1;
	}
	return pd[N+1][N+1][N+1];
}

int main(int argc, char *argv[]) {
	while(scanf("%d", &N) && N) {
		REP(i, 1, N) REP(j, 1, 3)
			scanf("%d", &m[i][j]);
		printf("%d\n", solve());
	}
	return 0;
}


