#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 1000002

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
string j[] = {"ataque", "pedra", "papel"};

int main(int argc, char** argv) {
	int n;
	string x1, x2;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		cin >> x1 >> x2;
		if(x1 == j[0] && x2 == j[1]) printf("Jogador 1 venceu\n");
		else if(x2 == j[0] && x1 == j[1]) printf("Jogador 2 venceu\n");
		
		else if(x1 == j[1] && x2 == j[2]) printf("Jogador 1 venceu\n");
		else if(x2 == j[1] && x1 == j[2]) printf("Jogador 2 venceu\n");
		
		else if(x1 == j[2] && x2 == j[0]) printf("Jogador 2 venceu\n");
		else if(x2 == j[2] && x1 == j[0]) printf("Jogador 1 venceu\n");
		
		else if(x1 == j[2] && x2 == j[2]) printf("Ambos venceram\n");
		else if(x1 == j[1] && x2 == j[1]) printf("Sem ganhador\n");
		else if(x1 == j[0] && x2 == j[0]) printf("Aniquilacao mutua\n");
	}
	
	return 0;
}
