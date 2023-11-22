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
#define MAX 210
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int dy[] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dx[] = {0, 1, 1, 1, 0, -1, -1, -1};
bool vet[MAX][MAX];
int n, m, ans;

bool ver(int i, int j) {
	return (i >= 1 && i <= n && j >= 1 && j <= m);
}

void dfs(int y, int x) {
	ans++;
	vet[y][x] = true;
	rep(k, 0, 8) {
		int yy = y + dy[k];
		int xx = x + dx[k];
		if(!ver(yy,xx)) continue;
		if(!vet[yy][xx]) dfs(yy, xx);
	}
}

int main(int argc, char** argv) {
	int x, y, k, x1, y1;
	scanf("%d%d%d%d%d", &n, &m, &y, &x, &k);
	while(k--) {
		scanf("%d%d", &y1, &x1);
		vet[(n - y1) + 1][x1] = true;
	}
	dfs((n - y) + 1, x);
	printf("%d\n", ans);
	return 0;
}
