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
int dy[] = {1, -1, -1, 1};
int dx[] = {1, 1, -1, -1};
const int MAX = 30;
int m[MAX][MAX];
int N, M; 

bool check(int i, int j) { return (i >= 1 && i <= N && j >= 1 && j <= M); }

int solve(int i, int j) {
	int aux = m[i][j];
	int ans = 0;
	rep(k, 0, 4) {
		int ii = i + dy[k];
		int jj = j + dx[k];
		int iii = ii + dy[k];
		int jjj = jj + dx[k];
		if(!check(iii, jjj)) continue;
		if(m[ii][jj] != 2 || m[iii][jjj]) continue;
		m[ii][jj] = 0; m[i][j] = 0;
		ans = max(ans, solve(iii, jjj) + 1);
		m[ii][jj] = 2; m[i][j] = aux;
	}
	return ans;
}

int main(int argc, char ** argv) {
	while(scanf("%d%d", &N, &M) && N|M) {
		int x = 1;
		memset(m, 0, sizeof m);
		int ans = 0, l = 1, c = 1;
		REP(i, 1, (N*M)/2 + (N*M)%2) {
			scanf("%d", &m[l][c]); c += 2;
			if(c > M) c = 1 + x++, l++, x %= 2;
		}
		REP(i, 1, N) REP(j, 1, M)
			if(m[i][j] == 1) ans = max(ans, solve(i, j));
		printf("%d\n", ans);
	}
	return 0;
}
