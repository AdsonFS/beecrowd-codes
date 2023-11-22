#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int q[MAX], p[MAX];
int pd[MAX][MAX];
char t[MAX];
int n, r;

int solve1(int i, int m, char e) {
	if(i >= n || m == r) return 0;
	if(t[i] == e) return solve1(i+1, m, e);
	if(pd[i][m] != -1) return pd[i][m];
	int pega = -INF;
	if(m + p[i] <= r)
		pega = solve1(i + 1, m + p[i], e) + q[i];
	return pd[i][m] = max(pega, solve1(i+1, m, e));
}

int main(int argc, char** argv) {
	scanf("%d%d", &n, &r);
	for(int i = 0; i < n; i++)
		cin >> q[i] >> t[i] >> p[i];
	memset(pd, -1, sizeof(pd));
	int v1 = solve1(0, 0, 'G');
	memset(pd, -1, sizeof(pd));
	int v2 = solve1(0, 0, 'C');
	memset(pd, -1, sizeof(pd));
	int v3 = solve1(0, 0, 'B');
	printf("%d\n", max(v1, max(v2, v3)));
	return 0;
}