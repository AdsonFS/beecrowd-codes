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
char vet[MAX];

int main(int argc, char** argv) {
	char vet[MAX];
	int n, q, k, m;
	while(scanf("%d%d", &n, &q) && (n+q)) {
		scanf(" %s", vet);
		while(q--) {
			string str = vet;
			string aux = vet;
			scanf("%d%d", &k, &m);
			int p = 1;
			int h = 1;
			while(m--) {
				if(aux[p-1] == 'x') aux[p-1] = 'o';
				else aux[p-1] = 'x';
				p = p + k;
				if(p > n) p -= n;
				// printf("%s\n", aux.c_str());
				if(aux == str) {
					m = m % h;
					break;
				}
				h++;
			}
			if(m > 0) {
				while(m--) {
					if(aux[p-1] == 'x') aux[p-1] = 'o';
					else aux[p-1] = 'x';
					p = p + k;
					if(p > n) p -= n;
				}
			}
			printf("%s\n", aux.c_str());
		}
	}
	return 0;
}
