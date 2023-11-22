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
#define S second
#define F first
#define MAX 105
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int v[MAX][MAX], sum[MAX][MAX];
int pd[MAX][MAX], N;

int solve(int a, int b, int n) {
	if(!n) return 0;
	int &ans = pd[a][b];
	if(ans != -1) return ans;
	ans = sum[n][b] - sum[n][a-1];
	ans = min(ans + solve(a+1, b, n-1), ans + solve(a, b-1, n-1));
	return ans;
}

int main(int argc, char** argv) {
	scanf("%d", &N);
	REP(i, 1, N)
		REP(j, 1, N) {
			scanf("%d", &v[i][j]);
			sum[i][j] = sum[i][j-1] + v[i][j];
		}
	memset(pd, -1, sizeof pd);
	printf("%d\n", solve(1, N, N));
	return 0;
}












