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
const int MAX = 1e4+4;
int a[MAX], pd[MAX][12];
int T, N;

int solve(int i, int m) {
	if(m > 5) return 0;
	if(i == N) return 1;
	if(pd[i][m] != -1) return pd[i][m];
	return pd[i][m] = solve(i+1, m+a[i]) | solve(i+1, abs(m-a[i]));
}

int main(int argc, char ** argv) {
	scanf("%d", &T);
	rep(t, 0, T) {
		scanf("%d", &N);
		memset(pd, -1, sizeof pd);
		rep(i, 0, N) scanf("%d", a+i);
		printf("%s\n", solve(0, 0) ? "Feliz Natal!" : "Ho Ho Ho!");
	}
	return 0;
}

