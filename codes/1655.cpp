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
const int MAX = 101;
double m[MAX][MAX];

int main(int argc, char** argv) {
	int N, M, u, v, c;
	while(scanf("%d", &N) && N) {
		memset(m, 0, sizeof m);
		scanf("%d", &M);
		rep(i, 0, M) {
			scanf("%d%d%d", &u, &v, &c);
			m[u][v] = m[v][u] = c/100.0;
		}
		REP(k, 1, N) REP(i, 1, N) REP(j, 1, N)
			m[i][j] = max(m[i][j], m[i][k] * m[k][j]);
		printf("%.6lf percent\n", m[1][N]*100);
	}
	return 0;
}
