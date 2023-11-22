#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int dy[] = {-2, 2, 0, 0};
int dx[] = {0, 0, -2, 2};
int n, m, l1, c1, l2, c2;
bool vis[15][15];
int sum, now;

bool limites(int i, int j) {
	return(i >= 1 && i <= n && j >= 1 && j <= m && !vis[i][j]);
}

void dfs(int i, int j) {
	now++;
	vis[i][j] = true;
	if(i == l2 && j == c2) sum = max(sum, now);
	else
		for(int k = 0; k < 4; k++)
			if(limites(i + dy[k], j + dx[k])) {
				now++;
				dfs(i + dy[k], j + dx[k]);
				now--;
			}
	vis[i][j] = false;
	now--;
}

int main(int argc, char** argv) {
	scanf("%d%d%d%d%d%d", &n, &m, &l1, &c1, &l2, &c2);
	for(int i = 2; i < n; i += 2)
		for(int j = 2; j < m; j += 2)
			vis[i][j] = true;
	dfs(l1, c1);
	printf("%d\n", sum);
	return 0;
}

