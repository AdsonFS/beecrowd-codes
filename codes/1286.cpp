#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define pi 3.141592653589793
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int t[25], q[35];
int pd[25][35];
int n, m;

int knapsack() {
	memset(pd, 0, sizeof(pd));
	for(int i = 1; i <= n; i++) {			// elemento atual
		for(int j = 1; j <= m; j++) {		// quantidade maxima
			if(q[i] <= j)
				pd[i][j] = max(pd[i-1][j], pd[i-1][j - q[i]] + t[i]);
			else
				pd[i][j] = pd[i-1][j];
		}
	}
	return pd[n][m];
}

int main(int argc, char** argv) {
	while(scanf("%d", &n) && n != 0) {
		scanf("%d", &m);
		for(int i = 1; i <= n; i++)
			scanf("%d%d", &t[i], &q[i]);
		printf("%d min.\n", knapsack());
	}
	return 0;
}
