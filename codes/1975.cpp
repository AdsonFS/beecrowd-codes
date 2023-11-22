#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

struct aluno {
	string nome;
	int erro;
};

bool comp(const aluno &a1, const aluno & a2) {
	if(a1.erro != a2.erro)
		return (a1.erro > a2.erro);
	return (a1.nome < a2.nome);
}

int main(int argc, char** argv) {
	int p, a, r;
	char nome[MAX], alu[MAX];
	while(scanf("%d%d%d", &p, &a, &r) && (p+a+r)) {
		map<string, int> perolas;
		vector<aluno> alunos;
		aluno aa;
		getchar();
		for(int i = 0; i < p; i++) {
			cin.getline(nome, MAX);
			perolas[nome] = 1;
		}
		for(int i = 0; i < a; i++) {
			cin.getline(alu, MAX);
			map<string, int> aux;
			aux = perolas;
			aa.nome = alu;
			aa.erro = 0;
			for(int j = 0; j < r; j++) {
				cin.getline(nome, MAX);
				if(aux[nome] == 1) {
					aux[nome] = 0;
					aa.erro++;
				}
			}
			alunos.pb(aa);
		}
		sort(all(alunos), comp);
		printf("%s", alunos[0].nome.c_str());
		for(int i = 1; i < a; i++) {
			if(alunos[i].nome == alunos[i-1].nome)
				continue;
			if(alunos[i].erro == alunos[0].erro)
				printf(", %s", alunos[i].nome.c_str());
			else
				break;
		}
		printf("\n");
	}
	return 0;
}
