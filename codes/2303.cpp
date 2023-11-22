#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int n, m, l, c;
int V[MAX][MAX];
bool vis[MAX][MAX];
long long S[MAX][MAX];

void precal()
{
	for(int x = 0; x < n; x++) {
		for(int y = 0; y < m; y++) {
			S[x][y] = V[x][y];
			if(x > 0)
				S[x][y] += S[x - 1][y];
			if(y > 0)
				S[x][y] += S[x][y - 1];
			if(x > 0 && y > 0)
				S[x][y] -= S[x - 1][y - 1];
		}
	}
}

long long sum(int a, int b, int x1, int y)
{
	if(x1 >= n)
		x1 = n - 1;
	if(y >= m)
		y = m - 1;
	long long soma = S[x1][y];
	if(a > 0) soma -= S[a - 1][y];
	if(b > 0) soma -= S[x1][b - 1];
	if(a > 0 && b > 0) soma += S[a - 1][b - 1];

	return soma;
}

void visitar(int i1, int j1, int i2, int j2) {
	for(int i = i1; i <= i2; i++) {
		for(int j = j1; j <= j2; j++) {
			vis[i][j] = true;
		}
	}
}

int main(int argc, char ** argv) {
	scanf("%d%d%d%d", &n, &m, &l, &c);
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			scanf("%d", &V[i][j]);
	ll cont = 0;
	precal();
	for(int i = 0; i < n - l + 1; i++) {
		for(int j = 0; j < m - c + 1; j++) {
			if(!vis[i][j]) {
				visitar(i, j, i + l - 1, j + c - 1);
				ll v = sum(i, j, i + l - 1, j + c - 1);
				cont = max(cont, v);
			}
		}
	}
	printf("%ld\n", cont);
	return 0;
}

