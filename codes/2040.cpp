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

int main(int argc, char** argv) {
	int n, x, p1, p2;
	char c;
	while(scanf("%d", &n) && n) {
		string nome, t1, t2;
		map<string, int> mapa;
		map<string, int>::iterator it;
		for(int i = 0; i < n; i++) {
			cin >> nome >> x;
			mapa[nome] = x;
		}
		for(int i = 0; i < n/2; i++) {
			cin >> t1 >> p1 >> c >> p2 >> t2;
			mapa[t1] += p1 * 3;
			mapa[t2] += p2 * 3;
			if(p1 > p2) mapa[t1] += 5;
			else if(p1 < p2) mapa[t2] += 5;
			else {
				mapa[t1]++;
				mapa[t2]++;
			}
		}
		int maior = -1;
		for(it = mapa.begin(); it != mapa.end(); it++) {
			if(it->S > maior) {
				maior = it->S;
				nome = it->F;
			}
		}
		if(nome == "Sport") printf("O Sport foi o campeao com %d pontos :D", maior);
		else {
			printf("O Sport nao foi o campeao. ");
			printf("O time campeao foi o %s com %d pontos :(", nome.c_str(), maior);
		}
		printf("\n\n");
	}
	return 0;
}
