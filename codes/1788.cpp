#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int primo[10000010], pd[MAX][MAX][6];
int mat[MAX][MAX], dy[2], dx[2];
int N, M, K;
char c;

void crivo() {
	primo[0] = primo[1] = 1;
	for(int i = 4; i < 10000010; i += 2)
		primo[i] = 1;
	for(int i = 3; i*i < 10000010; i += 2) {
		if(primo[i]) continue;
		for(int j = i*i; j < 10000010; j += i)
			primo[j] = 1;
	}
}

bool dentro(int i, int j) {
	return (i >= 0 && i < N && j >= 0 && j < M);
}

int solve(int i, int j, int k) {
	int &ans = pd[i][j][k];
	if(ans != -1) return ans;
	ans = 1;
	rep(p, 0, 2) {
		int y = i + dy[p];
		int x = j + dx[p];
		if(!dentro(y, x)) continue;
		if(mat[y][x] < mat[i][j]) ans = max(ans, solve(y, x, k) + 1);
		if(k && !primo[mat[i][j]]) ans = max(ans, solve(y, x, k-1) + 1);	
	}
	return ans;
}

int main(int argc, char** argv) {
	crivo();
	while(scanf("%d%d%d", &N, &M, &K) && (N+M+K)) {
		int ans = 0;
		scanf(" %c", &c);
		memset(pd, -1, sizeof pd);
		rep(i, 0, N) rep(j, 0, M) scanf("%d", &mat[i][j]);
		dy[0] = dx[0] = dy[1] = dx[1] = 0;
		if(c == 'N') dy[0] = -1, dx[1] = 1;
		else dy[0] = 1, dx[1] = -1;
		rep(i, 0, N) rep(j, 0, M) ans = max(ans, solve(i, j, K));
		printf("%d\n", ans);
	}
	return 0;
}

