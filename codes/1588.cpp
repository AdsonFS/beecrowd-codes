#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
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

struct jogo {
	string nome;
	int p, v, g, id;
	jogo(string nome, int id) {
		this->nome = nome;
		p = v = g = 0;
		this->id = id;
	}
};

bool comp(const jogo &t1, const jogo &t2) {
	if(t1.p != t2.p) return (t1.p > t2.p);
	if(t1.v != t2.v) return (t1.v > t2.v);
	if(t1.g != t2.g) return (t1.g > t2.g);
	return (t1.id < t2.id);
}

int main(int argc, char ** argv) {
	int g1, g2;
	int t, n, m, p;
	char nome1[100];
	char nome2[100];
	scanf("%d", &t);
	while(t--) {
		p = 0;
		vector<jogo> num;
		map<string, int> mapa;
		scanf("%d%d", &n, &m);
		rep(i, 0, n) {
			scanf(" %s", nome1);
			mapa[nome1] = p++;
			jogo tt(nome1, p - 1);
			num.pb(tt);
		}
		rep(i, 0, m) {
			scanf("%d %s %d %s", &g1, nome1, &g2, nome2);
			int ind1 = mapa[nome1];
			int ind2 = mapa[nome2];
			num[ind1].g += g1; num[ind2].g += g2;
			if(g1 > g2) {
				 num[ind1].p += 3; num[ind1].v++;
			}
			else if(g1 < g2) {
				 num[ind2].p += 3; num[ind2].v++;
			}
			else {
				num[ind1].p++;
				num[ind2].p++;
			}
		}
		sort(all(num), comp);
		rep(i, 0, n) printf("%s\n", num[i].nome.c_str());
	}
	return 0;
}
