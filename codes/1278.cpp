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

void printar(int n) {
	for(int i = 0; i < n; i++)
		printf(" ");
}

int main(int argc, char** argv) {
	int n, h = 1;
	int valor[101];
	string vet[101];
	string aux, nome;
	while(scanf("%d", &n) && n != 0) {
		getchar();
		int best = -1;
		for(int i = 0; i < n; i++) {
			getline(cin, nome);
			nome = " " + nome + " ";
			int tam = nome.size() - 1;
			int cont = 0;
			for(int j = 1; j < tam; j++) {
				if(isalpha(nome[j]) || (nome[j] == ' ' && isalpha(nome[j+1]) && aux.size() > 0)) {
					aux += nome[j];
					cont++;
				}
			}
			aux += '\0';
			best = max(best, cont);
			valor[i] = cont;
			vet[i] = aux;
			aux.clear();
		}
		if(h++ != 1) printf("\n");
		for(int i = 0; i < n; i++){
			printar(best - valor[i]);
			printf("%s\n", vet[i].c_str());
		}
	}
	return 0;
}
