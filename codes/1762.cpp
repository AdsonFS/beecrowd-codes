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
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n, x;
	double m, sum;
	char nome[110];
	scanf("%d", &n);
	while(scanf("%d", &n) != EOF) {
		sum = 0;
		map<string, double> mapa;
		rep(i, 0, n) {
			scanf(" %[^\n]", nome);
			scanf("%lf", &m);
			mapa[nome] = m;
		}
		scanf("%lf", &m);
		while(scanf(" %[^\n]", nome)) {
			scanf("%d", &x);
			if(strcmp(nome, "-") == 0 && x == 0)
				break;
			if(mapa.count(nome))
				sum += (mapa[nome] * x);
			else printf("NAO LISTADO: %s\n", nome);
		}
		printf("Peso total: %.2lf kg\n", sum);
		printf("Numero de trenos: %d\n\n", (int)ceil(sum / m));
	}
	return 0;
}
