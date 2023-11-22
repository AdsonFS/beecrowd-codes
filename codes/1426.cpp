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
int vet[10][10];
int aux[10];

int main(int argc, char** argv) {
	int t, lixo;
	scanf("%d", &t);
	while(t--) {
		for(int i = 0; i < 6; i++)
			scanf("%d", &lixo);
		for(int i = 0; i < 4; i++)
			scanf("%d", &aux[i]);
		for(int i = 1; i <= 9; i += 2)
			scanf("%d", &vet[9][i]);
		for(int i = 2, j = 0; i <= 8; i += 2, j++)
			vet[9][i] = (aux[j] - vet[9][i-1] - vet[9][i+1]) / 2;
		
		for(int i = 8; i >= 1; i--) {
			for(int j = 1; j <= i; j++)
				vet[i][j] = vet[i+1][j] + vet[i+1][j+1];
		}
		for(int i = 1; i <= 9; i++) {
			for(int j = 1; j <= i; j++) {
				printf("%d", vet[i][j]);
				if(j != i) printf(" ");
			}
			printf("\n");
		}
	}
	return 0;
}

