#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int a[MAX], b[MAX], c[MAX];
int pd[MAX][5][5];
int n;

bool verifica(int x, int y, int x1, int y1) {
	int X = max(x, y);
	int Y = min(x, y);
	int X1 = max(x1, y1);
	int Y2 = min(x1, y1);
	return (X1 <= X && Y2 <= Y);
}

int solve(int i, int x, int y, int e1, int e2) {
	if(i >= n) return 0;
	if(pd[i][e1][e2] != -1) return pd[i][e1][e2];
	int a1, a2, a3;
	a1 = a2 = a3 = -INF;
	if(verifica(x, y, a[i], b[i]))
		a1 = solve(i+1, a[i], b[i], 0, 1) + c[i];
	
	if(verifica(x, y, a[i], c[i]))
		a2 = solve(i+1, a[i], c[i], 0, 2) + b[i];
	
	if(verifica(x, y, b[i], c[i]))
		a3 = solve(i+1, b[i], c[i], 1, 2) + a[i];
	return pd[i][e1][e2] = max(a1, max(a2, a3));
}

int main(int argc, char** argv) {
	scanf("%d", &n);
	memset(pd, -1, sizeof(pd));
	for(int i = 0; i < n; i++)
		scanf("%d%d%d", &a[i], &b[i], &c[i]);
	int v = solve(0, MAX, MAX, 0, 0);
	if(v > 0) printf("%d\n", v);
	else printf("-1\n");
	return 0;
}
