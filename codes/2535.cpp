#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
double x[MAX], y[MAX];

int main(int argc, char** argv) {
	int n, sum;
	char espe[110], raca[110], nome[110], lixo[110]; 
	while(cin >> n) {
		sum = 0;
		cin.ignore();
		for(int k = 0; k < n; k++) {
			cin.getline(espe, 110);
			cin.getline(raca, 110);
			cin.getline(nome, 110);
			cin.getline(lixo, 110);
			bool ok = true, ok1 = false;
			if(strcmp(espe, "cachorro") != 0) ok = false;
			int tam = strlen(nome);
			string aux = nome;
			if(aux.find(' ') == -1) ok = false;
			for(int i = 0; i < tam; i++) {
				if(nome[i] == raca[0] && (nome[i-1] == ' ' || i == 0)) {
					ok1 = true;
					break;
				}
			}
			if(ok && ok1) sum++;
		}
		printf("%d\n", sum);
	}
	return 0;
}

