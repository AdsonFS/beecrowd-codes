#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 60
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

bool ver(char c) {
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

int main(int argc, char** argv) {
	char vet[MAX];
	// while(!cin.getline(vet, MAX).eof()) {
	while(scanf(" %[^\n]", vet) != EOF) {
		string str = vet;
		str = "  " + str + "  ";
		int tam = str.size();
		int sum = 0;
		int cont = 0;
		int n_pal = 0;
		bool ok = true;
		for(int i = 0; i < tam; i++) {
			char c = str[i];
			if(c == ' ') {
				if(cont) {
					sum += cont;
					n_pal++;
				}
				ok = true;
				cont = 0;
			}
			else if(ver(c) && ok)
				cont++;
			else if(c == '.' && ok && ver(str[i-1]) && str[i+1] == ' ')
				ok = true;
			else {
				ok = false;
				cont = 0;
			}
		}
		int v = n_pal != 0 ? sum / n_pal: 0;
		if(v <= 3) v = 250;
		else if(v <= 5) v = 500;
		else v = 1000;
		printf("%d\n", v);
	}
	return 0;
}
