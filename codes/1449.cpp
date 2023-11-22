#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char * * argv) {
	int t, n, m;
	char nome[100], frase[100];
	scanf("%d", &t);
	while(t--) {
		map<string, string> mapa;
		scanf("%d%d", &n, &m);
		getchar();
		for(int i = 0; i < n; i++) {
			cin.getline(nome, 100);
			cin.getline(frase, 100);
			mapa[nome] = frase;
		}
		for(int k = 0; k < m; k++) {
			cin.getline(frase, 100);
			string aux = frase;
			string str, ans;
			aux.pb(' ');
			int tam = aux.size();
			// cout << frase << "\n";
			for(int i = 0; i < tam; i++) {
				if(aux[i] != ' ')
					str.pb(aux[i]);
				else {
					ans = str;
					if(mapa.find(str) != mapa.end())
						ans = mapa[str];
					printf("%s", ans.c_str());
					if(i != tam - 1)
						printf(" ");
					str.clear();
				}
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}
