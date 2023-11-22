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
typedef unsigned long long int ull;
char vet[MAX][MAX];
int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};
int n, m;

int main(int argc, char** argv) {
	scanf("%d%d", &n, &m);
	memset(vet, '&', sizeof(vet));
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin >> vet[i][j];
	int cont = 0;
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= n; j++) {
			if(vet[i][j] == '#') {
				if(i == 1 || i == n || j == 1 || j == n) cont++;
				else {
					for(int k = 0; k < 4; k++) {
						if(vet[i + dy[k]][j + dx[k]] == '.') {
							cont++;
							break;
						}
					}
				}
			}
		}
	}
	printf("%d\n", cont);
	return 0;
}
