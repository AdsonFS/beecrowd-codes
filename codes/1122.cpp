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
const int MAX = 15e4;
const int GAP = 72e3;
int N, F, a[50];
int pd[50][MAX];
bool s[2][50];

int solve(int i, int m) {
	if(pd[i][m] != -1) return pd[i][m];
	if(i == N && m == GAP) return 1;
	if(i == N) return 0;
	if(solve(i+1, m+a[i])) pd[i][m] = 1, s[1][i] = 1;
	if(solve(i+1, m-a[i])) pd[i][m] = 1, s[0][i] = 1;
	return pd[i][m] = solve(i+1, m+a[i])|solve(i+1, m-a[i]);
}

int main(int argc, char** argv) {
	while(scanf("%d%d", &N, &F) && N|F) {
		rep(i, 0, N) scanf("%d", a+i);
		memset(pd, -1, sizeof pd);
		memset(s, 0, sizeof s);
		int ans = solve(0, GAP+F);
		if(!ans) puts("*");
		else {
			rep(i, 0, N)
				printf("%c", s[0][i]&s[1][i] ? '?' : s[0][i] ? '+' : '-');
			printf("\n");
		}
	}
	return 0;
}
