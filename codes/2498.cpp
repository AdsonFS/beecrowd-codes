#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 1010
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int w[MAX], v[MAX];
int pd[MAX][110];
int N, W, h;

int knapsack() {
	REP(i, 1, N) {
		REP(j, 1, W) {
			if(w[i] <= j)
				pd[i][j] = max(pd[i-1][j], pd[i-1][j - w[i]] + v[i]);
			else
				pd[i][j] = pd[i-1][j];
		}
	}
	return pd[N][W];
}

int main(int argc, char** argv) {
	while(scanf("%d%d", &N, &W) && (N+W)) {
		REP(i, 1, N)
			scanf("%d%d", &w[i], &v[i]);
		printf("Caso %d: %d\n", ++h, knapsack());
	}
	return 0;
}
