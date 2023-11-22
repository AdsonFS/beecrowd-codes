#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1001
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int n, m, x, y, h, X1, Y1;
int vet[MAX][MAX];

int main(int argc, char * * argv) {
	while(scanf("%d%d", &n, &m) && (n+m) != 0) {
		x = 0, y = 0;
		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++)
				scanf("%d", &vet[i][j]);
		while(scanf("%d%d", &X1, &Y1)) {
			if(X1 == 0 && Y1 == 0) break;
			if(X1 > 0) x = (x + X1) % m;
			else x = (x + m + X1) % m;
			if(Y1 > 0) y = (y + n - Y1) % n;
			else y = (y - Y1) % n;
		}	
		x = (0 + m - x) % m;
		y = (0 + n - y) % n;
		printf("Teste %d\n", ++h);
		for(int i = y; i < y + n; i++) {
			printf("%d", vet[i % n][x]);
			for(int j = x+1; j < x + m; j++)
				printf(" %d", vet[i % n][j % m]);
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
