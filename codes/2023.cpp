#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 105

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv){
	string str, x1, x2;
	char nome[100], aux[100] = "ZZZZZZZZ";
	set<string, string> num;
	while(!cin.getline(nome, 100).eof()) {
		int tam = strlen(nome);
		x1 = nome;
		for(int i = 0; i < tam; i++)
			nome[i] = tolower(nome[i]);
		if(strcmp(aux, nome) < 0){
			strcpy(aux, nome);
			x2 = x1;
		}
	}
	printf("%s\n", x2.c_str());
	return 0;
}