#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int mana[MAX], dano[MAX];
int pd[MAX][2*MAX];
int n, p;

int solve(int i, int m) {
	if(m >= p) return 0;
	if(i >= n) return INF;
	if(pd[i][m] != -1) return pd[i][m];
	return pd[i][m] = min(solve(i+1, m), solve(i+1, m + dano[i]) + mana[i]);
}

int main(int argc, char * argv[]) {
	while(scanf("%d%d", &n, &p) != EOF) {
		memset(pd, -1, sizeof(pd));
		for(int i = 0; i < n; i++)
			scanf("%d%d", &dano[i], &mana[i]);
		int v = solve(0, 0);
		if(v != INF) printf("%d\n", v);
		else printf("-1\n");
	}
	return 0;
}
