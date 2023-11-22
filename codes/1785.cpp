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
int x, h;

int main(int argc, char** argv) {
	char num[10], maior[10], menor[10];
	menor[4] = maior[4] = '\0';
	scanf("%d", &x);
	while(scanf("%d", &x) != EOF) {
		int cont = 0;
		while(x != 6174) {
			sprintf(num, "%d", x);
			string n = num;
			while(n.size() < 4)
				n = "0" + n;
			sort(all(n));
			set<char> aux;
			for(int i = 0, j = 3; i < 4; i++, j--) {
				menor[i] = n[i];
				maior[i] = n[j];
				aux.insert(n[i]);
			}
			if(aux.size() == 1) {
				cont = -1;
				break;
			}
			x = atoi(maior) - atoi(menor);
			cont++;
		}
		
		printf("Caso #%d: %d\n", ++h, cont);
	}
	return 0;
}
