#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int s[MAX], m[MAX];
int pd[MAX][25];					// indice - marcados
int n, l, h;

int main(int argc, char** argv) {
	memset(pd, -INF, sizeof(pd));	// Inicializando com valor baixo
	scanf("%d%d%d", &n, &l, &h);
	for(int i = 0; i < n; i++)
		scanf("%d", s + i);
	for(int i = 0; i < n; i++)
		scanf("%d", m + i);
	int sum = -INF;					// valor baixo pq pode dar soma negativa
	if(m[0]) {
		pd[0][0] = 0;				// não peguei;
		pd[0][1] = s[0];			// peguei
	} else {
		pd[0][0] = max(s[0], 0);	// escolhendo
	}
	if(l == 0) sum = pd[0][0];
	if(l <= 1 && h >= 1) sum = max(sum, pd[0][1]);
	
	for(int i = 1; i < n; i++) {		// inicio no 1 -> 0 já foi verificado
		for(int j = 0; j <= h; j++)	{	// indo até h -> quantidade de elemntos marcados
			if(m[i] == 1) {
				if(j == 0)
					pd[i][j] = 0;	// nao posso pegar
				else
					if(pd[i-1][j-1] != -INF)	// preciso pegar
						pd[i][j] = pd[i-1][j-1] + s[i];
			} else {
				if(j == 0)
					pd[i][j] = max(pd[i-1][j] + s[i], 0);
				else
					if(pd[i-1][j] != -INF)
						pd[i][j] = pd[i-1][j] + s[i];
			}
			if(j >= l) sum = max(sum, pd[i][j]);
		}
	}
	printf("%d\n", sum);
	return 0;
}
