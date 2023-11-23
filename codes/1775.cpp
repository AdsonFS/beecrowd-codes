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
int T, N, a[MAX];
int pd[MAX][MAX];

int solve(int i, int j) {
	if(i > j) return 0;
	if(pd[i][j] != -1) return pd[i][j];
	if(a[i] == a[j]) pd[i][j] = solve(i+1, j-1)+1;
	else pd[i][j] = min(solve(i+1, j), solve(i, j-1))+1;
	return pd[i][j];
}

int main(int argc, char ** argv) {
	scanf("%d", &T);
	REP(t, 1, T) {
		scanf("%d", &N);
		memset(pd, -1, sizeof pd);
		REP(i, 1, N) scanf("%d", a+i);
		printf("Caso #%d: %d\n", t, solve(1, N));
	}
	return 0;
}
