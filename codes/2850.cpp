#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	string x1;
	char nome[20];
	while(cin.getline(nome, 20)) {
		x1 = nome;
		if(x1 == "esquerda")
			printf("ingles\n");
		else if(x1 == "direita")
			printf("frances\n");
		else if(x1 == "nenhuma")
			printf("portugues\n");
		else if(x1 == "as duas")
			printf("caiu\n");
	}
	return 0;
}


