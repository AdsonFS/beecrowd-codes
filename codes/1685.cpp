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
const int MAX = 1e3+3;
int N, M, T, s[MAX][MAX];
char m[MAX][MAX];

bool ver(int i, int j) {
	return(i <= N && j <= M);
}

int sum(int yy, int xx, int y, int x) {
	return(s[y][x] + s[yy-1][xx-1] - s[y][xx-1] - s[yy-1][x]);
}

int main(int argc, char ** argv) {
	scanf("%d", &T);
	rep(k, 0, T) {
		int l = 1, cnt = 0;
		scanf("%d%d", &N, &M);
		rep(i, 0, N) scanf("%s", m[i]);
		REP(i, 1, N)
			REP(j, 1, M) {
				s[i][j] = m[i-1][j-1] == '.' ? 1 : 0;
				s[i][j] += s[i-1][j] + s[i][j-1] - s[i-1][j-1];
			}
		REP(i, 1, N) REP(j, 1, M)
			while(ver(i+l, j+l) && sum(i, j, i+l, j+l) == (l+1)*(l+1)) l++;
		printf("The side of the square is %d and the locations are:\n", l);
		REP(i, 1, N) REP(j, 1, M)
			if(ver(i+l-1, j+l-1) && sum(i, j, i+l-1, j+l-1) == l*l) cnt++, printf("%d %d\n", i, j);
		printf("%d in total.\n", cnt);
	}
	return 0;
}

