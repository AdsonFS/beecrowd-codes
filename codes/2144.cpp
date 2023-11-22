#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = "<< x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int w1, w2, r, h;
double media;

int main(int argc, char ** argv) {
	while(scanf("%d%d%d", &w1, &w2, &r) && (w1+w2+r)) {
		double a1 = w1 * (1 + (r/30.0));
		double a2 = w2 * (1 + (r/30.0));
		double m = (a1 + a2) / 2.0;
		media += m;
		h++;
		if(m < 13) printf("Nao vai da nao\n");
		else if(m < 14) printf("E 13\n");
		else if(m < 40) printf("Bora, hora do show! BIIR!\n");
		else if(m <= 60) printf("Ta saindo da jaula o monstro!\n");
		else printf("AQUI E BODYBUILDER!!\n");
	}
	if(media / h > 40) printf("\nAqui nois constroi fibra rapaz! Nao e agua com musculo!\n");
	return 0;
}
