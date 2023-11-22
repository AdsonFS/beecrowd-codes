#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 10010
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int V[MAX][MAX], S[MAX][MAX];
int n, m, l, c;

void precal() {
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			S[i][j] = V[i][j];
			S[i][j] += S[i-1][j];
			S[i][j] += S[i][j-1];
			S[i][j] -= S[i-1][j-1];
			// S[i][j] = 0;
		}
	}
}

//			y	   x
int sum(int a, int b, int y, int x) {
	int soma = 0;
	soma += S[y][x];
	soma -= S[y][b-1];
	soma -= S[a-1][x];
	soma += S[a-1][b-1];
	return soma;
}

int main(int argc, char * * argv) {
	scanf("%d%d%d%d", &n, &m, &l, &c);
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			cin >> V[i][j];
	precal();
	int ans = -1;
	for(int i = 1; i <= n - l + 1; i++)
		for(int j = 1; j <= m - c + 1; j++)
			ans = max(ans, sum(i, j, i + l - 1, j + c - 1));
	printf("%d\n", ans);
	return 0;
}
