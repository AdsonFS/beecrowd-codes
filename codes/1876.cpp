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
#define MAX 110
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	char vet[MAX];
	while(scanf(" %s", vet) != EOF) {
		int j;
		int ans = 0;
		int cont = 0;
		bool ok = true;
		int tam = strlen(vet);
		for(int i = 0; i < tam; i++)
			if(vet[i] == 'x') j = i;
		for(int i = 0; i < tam; i++) {
			if(vet[i] == 'o') cont++;
			else if(vet[i] == 'x' && ok) {
				ok = false;
				ans = max(ans, cont);
				cont = 0;
			}
			else {
				if(i == j) ok = true;
				ans = max(ans, cont / 2);
				cont = 0;
			}
		}
		ans = max(ans, cont);
		printf("%d\n", ans);
	}
	return 0;
}
