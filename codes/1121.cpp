#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 105

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int n, m, s, d, y, x, sum;
int dx[] = {0, 1, 0, -1};
int dy[] = {-1, 0, 1, 0};
string direcao = "NLSO";
char vet[MAX][MAX];
char c;

int main(int argc, char ** argv) {
	while(scanf("%d%d%d", &n, &m, &s) && (n+m+s) != 0) {
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= m; j++) {
				scanf(" %c", &vet[i][j]);
				if(vet[i][j] >= 'A' && vet[i][j] <= 'Z') {
					d = direcao.find(vet[i][j]);
					y = i; x = j;
				}
			}
		sum = 0;
		for(int i = 0; i < s; i++) {
			scanf(" %c", &c);
			if(c == 'D')
				d = (d + 1) % 4;
			else if(c == 'E')
				d = (d + 4 - 1) % 4;
			else {
				if(vet[y + dy[d]][x + dx[d]] != '#' && y + dy[d] != 0 && y + dy[d] != n + 1 && x + dx[d] != 0 && x + dx[d] != m + 1) {
					x = (x + dx[d]);
					y = (y + dy[d]);
					if(vet[y][x] == '*') {
						vet[y][x] = '.';
						sum++;
					}
				}
			}
		}
		
		printf("%d\n", sum);
	}	
	return 0;
}
