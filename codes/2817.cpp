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
typedef pair<char, int> ci;
const int MAX = 1e3+3;
int N, M, L, ans = -1;
int sc[MAX][MAX];
int sm[MAX][MAX];
char m[MAX][MAX];

bool ver(int i, int j) { return(i <= N && j <= M); }

int sumC(int yy, int xx, int y, int x) {
	return(sc[y][x] + sc[yy-1][xx-1] - sc[y][xx-1] - sc[yy-1][x]);
}

int sumM(int yy, int xx, int y, int x) {
	return(sm[y][x] + sm[yy-1][xx-1] - sm[y][xx-1] - sm[yy-1][x]);
}

int main(int argc, char ** argv) {
	scanf("%d%d", &N, &M);
	rep(i, 0, N) scanf("%s", m[i]);
	scanf("%d", &L);
	REP(i, 1, N) REP(j, 1, M) {
		sc[i][j] = 25 * (m[i-1][j-1] == 'C');
		sc[i][j] += sc[i][j-1] + sc[i-1][j] - sc[i-1][j-1];
		sm[i][j] = 12 * (m[i-1][j-1] == 'M');
		sm[i][j] += sm[i][j-1] + sm[i-1][j] - sm[i-1][j-1];
	}
	REP(i, 1, N) REP(j, 1, M) 
		if(ver(i+L-1, j+L-1) && sumC(i, j, i+L-1, j+L-1) && sumM(i, j, i+L-1, j+L-1))
			ans = max(ans, sumC(i, j, i+L-1, j+L-1) + sumM(i, j, i+L-1, j+L-1));
	printf("%d\n", ans);
	return 0;
}