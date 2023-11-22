#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 20
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

struct ponto {
	int x, y;
	ponto() {}
	typedef ponto vetor;
	ponto(int X, int Y) { x = X; y = Y; }
	ponto operator - (ponto q) { return ponto(x - q.x, y - q.y); }
	int operator % (vetor q) { return x*q.y - y*q.x; } // vetor perpendicular
	
};
int n, m;		// n -> preto
typedef ponto vetor;

int cmp(int a, int b = 0, double esp = 0) {
	if(fabs(a-b) < esp) return 0;
	if(a < b) return -1;
	return 1;
}

int pontoReta(ponto A, ponto B, ponto P) {
	vetor AB = B-A, AP = P-A;
	return cmp(AB%AP);
}

bool inv(double s1, double s2) { // inverteu o sinal
	return (s1 * s2 == -1);
}

int pontoTriangulo(ponto A, ponto B, ponto C, ponto P) {
	int s1 = pontoReta(A, B, P);
	int s2 = pontoReta(B, C, P);
	int s3 = pontoReta(C, A, P);
	if(s1 == s2 && s2 == s3) return 1;
	// if(inv(s1, s2) || inv(s2, s3) || inv(s1, s3)) return -1;
	return 0;					// na borda
}

int main(int argc, char** argv) {
	int x, y;
	while(scanf("%d%d", &n, &m) != EOF) {
		vector<ponto> bra, pre;
		int ans = 0, cont;
		rep(i, 0, n) {
			scanf("%d%d", &x, &y);
			pre.pb(ponto(x, y));
		}
		rep(i, 0, m) {
			scanf("%d%d", &x, &y);
			bra.pb(ponto(x, y));
		}
		ponto a, b, c;
		rep(i, 0, n) {
			a = pre[i];
			rep(j, i+1, n) {
				b = pre[j];
				rep(p, j+1, n) {
					c = pre[p];
					cont = 0;
					rep(k, 0, m) {
						ponto p = bra[k];
						if(pontoTriangulo(a, b, c, p) == 1) cont++;
					}
					ans += cont * cont;
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
