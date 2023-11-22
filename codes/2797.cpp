#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
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
int mat[MAX][MAX], empty[MAX];
int n, m, k;
bool ok = 1;

bool solve(int i, int j, int u, int d) {
	REP(I, 1, n) {
		if(mat[I][j] == 1 && u < k) return false;
		if(mat[I][j] == 2 && d < k) return false;
		if(mat[I][j] == 1) u = -1;
		if(mat[I][j] == 2) d = -1;
		u++;
		d++;
	}
	return true;
}

int main(int argc, char** argv) {
	scanf("%d%d%d", &n, &m, &k);
	REP(i, 1, n)
		REP(j, 1, m) {
			scanf("%d", &mat[i][j]);
			empty[j] = max(empty[j], mat[i][j]);
		}
	REP(j, 1, m) {
		if(empty[j] && (empty[j-1] || empty[j+1])) ok = false;
		else ok = solve(1, j, INF, INF);
		if(!ok) break;
	}
	if(ok) puts("S");
	else puts("N");
	return 0;
}

