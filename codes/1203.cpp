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
const int MAX = 1e2+3;
int N, M, a, b, g[MAX];
bool pd[MAX][MAX*MAX];

bool solve() {
	rep(i, 0, N) pd[i][0] = 1;
	REP(i, 1, N)
		REP(j, 1, M) {
			pd[i][j] = pd[i-1][j];
			if(g[i] <= j) pd[i][j] |= pd[i-1][j-g[i]];
		}
	return pd[N][M];
}

int main(int argc, char ** argv) {
	while(scanf("%d%d", &N, &M) != EOF) {
		rep(i, 0, M) scanf("%d%d", &a, &b), g[a]++, g[b]++;
		printf("%c\n", solve() ? 'S' : 'N');
		REP(i, 1, N) g[i] = 0;
	}
	return 0;
}
