#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 510

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
map<pair<int, int>, int> senha;		// indice - valor
int n, h, aux, maior;
int vet[12];
int fim[12];
char c;

int main(int argc, char * * argv) {
	while(scanf("%d", &n) && n != 0) {
		while(n--) {
			for(int i = 0; i < 10; i++)
				scanf("%d", vet + i);
			for(int i = 0; i < 6; i++) {
				cin >> c;
				switch(c) {
					case 'A': senha[mk(i, vet[0])]++; senha[mk(i, vet[1])]++; break;
					case 'B': senha[mk(i, vet[2])]++; senha[mk(i, vet[3])]++; break;
					case 'C': senha[mk(i, vet[4])]++; senha[mk(i, vet[5])]++; break;
					case 'D': senha[mk(i, vet[6])]++; senha[mk(i, vet[7])]++; break;
					case 'E': senha[mk(i, vet[8])]++; senha[mk(i, vet[9])]++; break;
				}
			}
		}
		for(int i = 0; i < 6; i++) {
			maior = -1;
			for(int j = 0; j < 10; j++)
				if(senha[mk(i, j)] > maior) {
					maior = senha[mk(i, j)];
					fim[i] = j;
				}
		}
		printf("Teste %d\n", ++h);
	//	printf("%d", fim[0]);
		for(int i = 0; i < 6; i++)
			printf("%d ", fim[i]);
		printf("\n\n");
		senha.clear();
	}
	return 0;
}
