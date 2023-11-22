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
const int MAX = 1e2+2;
ll pd[MAX][MAX][MAX];
int N, K, a[MAX];

ll solve(int i, int j, int k) {
	if(pd[i][j][k] != -1) return pd[i][j][k];
	if(i == N && k == K) return 1;
	if(i == N || k > K) return 0;
	pd[i][j][k] = solve(i+1, j, k);
	if(a[i] > a[j]) pd[i][j][k] += solve(i+1, i, k+1);
	return pd[i][j][k];
}

int main(int argc, char ** argv) {
	while(scanf("%d%d", &N, &K) && N|K) {
		rep(i, 0, N) scanf("%d", a+i);
		a[N] = -(1 << 30);
		memset(pd, -1, sizeof pd);
		printf("%lld\n", solve(0, N, 0));
	}
	return 0;
}
