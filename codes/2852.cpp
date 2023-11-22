#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
string str = "abcdefghijklmnopqrstuvwxyz";
char vet[30][30];

void setar() {
	for(int i = 0; i < 26; i++) {
		for(int j = 0; j < 26; j++) {
			vet[i][j] = str[(i + j) % 26];
		}
	}
}

int main(int argc, char** argv) {
	setar();
	string x1;
	cin >> x1;
	char nome[MAX];
	int n;
	int t = x1.size();
	cin >> n;
	cin.ignore();
	while(n--) {
		int p = 0, e = 0, ok = -1;
		cin.getline(nome, MAX);
		int tam = strlen(nome);
		for(int i = 0; i < tam; i++) {
			if((nome[i] == 'a' || nome[i] == 'e' || nome[i] == 'i' || nome[i] == 'o' || nome[i] == 'u') && e == 0) {
				printf("%c", nome[i]);
				ok = 1;
				e = 1;
			}
			else if(nome[i] == ' ') {
				printf(" ");
				e = 0;
				ok = -1;
			}
			else if(ok == 1)
				printf("%c", nome[i]);
			else {
				printf("%c", vet[(x1[p++] - 97)][(nome[i] - 97)]);
				p = p % t;
				e = 1;
				ok = -1;
			}
		}
		printf("\n");
	}
	return 0;
}