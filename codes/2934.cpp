#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 1000010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef unsigned long long int ull;
int N, u[MAX], v[MAX], p[MAX], e[MAX];
int pd[MAX][2];

int solve(int i, int m) {
	if(i == N && !m) return 1;
	if(i == N) return 0;
	int &ans = pd[i][m];
	if(ans != -1) return ans;
	ans = solve(p[i] , m)+1;
	if(!m) ans = max(ans, solve(e[i], m+1)+2);
	return ans;
}

int main(int argc, char** argv) {
	scanf("%d", &N);
	rep(i, 0, N) scanf("%d", &v[i]);
	memset(pd, -1, sizeof pd);
	rep(i, 0, MAX) u[i] = p[i] = e[i] = N;
	PER(i, N-1, 0) { 
		u[v[i]] = i;
		p[i] = u[v[i]+1];
		e[i] = u[v[i]+2];
	}
	int ans = 0;
	rep(i, 0, N) ans = max(ans, solve(i, 0));
	printf("%d\n", ans);
	return 0;
}

