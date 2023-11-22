#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	int h = 1;
	char nome[MAX], num[10];
	while(cin >> num) {
		cin.ignore();
		cin.getline(nome, MAX);
		int f = 0, m = 0, i = 0;
		int tam = strlen(nome);
		while(i < tam) {
			if(nome[i] == num[0] && nome[i+1] == num[1]) {
				if(nome[i + 3] == 'F')
					f++;
				else
					m++;
			}
			i += 5;
		}
		if(h != 1)
			printf("\n");
		printf("Caso %d:\n", h++);
		printf("Pares Iguais: %d\n", m+f);
		printf("F: %d\nM: %d\n", f, m);
	}
	return 0;
}
