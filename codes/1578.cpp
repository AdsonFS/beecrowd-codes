#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000100
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int m[25];
ull vet[25][25];
int tam[25][25];

int main(int argc, char** argv) {
	int n, t, h = 4;
	scanf("%d", &t);
	while(t--) {
		memset(m, 0, sizeof(m));
		scanf("%d", &n);
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				cin >> vet[i][j];
				vet[i][j] = vet[i][j] * vet[i][j];
				ull valor = vet[i][j];
				int cont = 0;
				while(valor) {
					valor /= 10;
					cont++;
				}
				if(vet[i][j] == 0) cont = 1;
				tam[i][j] = cont;
				m[j] = max(m[j], cont);
			}
		}
		if(h != 4) printf("\n");
		printf("Quadrado da matriz #%d:\n", h++);
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < n; j++) {
				int t = m[j] - tam[i][j];
				for(int k = 0; k < t; k++)
					printf(" ");
				// printf("%llu", vet[i][j]);
				cout << vet[i][j];
				if(j != n - 1) printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}
