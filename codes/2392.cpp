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
bool vet[MAX];

bool ver(int i) {
	return (i >= 1 && i <= 105);
}

int main(int argc, char** argv) {
	int n, m, p, d;
	scanf("%d%d", &n, &m);
	while(m--) {
		scanf("%d%d", &p, &d);
		vet[p] = true;
		int aux = p + d;
		while(ver(aux)) {
			vet[aux] = true;
			aux += d;
		}
		aux = p - d;
		while(ver(aux)) {
			vet[aux] = true;
			aux -= d;
		}
	}
	REP(i, 1, n) printf("%d\n", vet[i]);
	return 0;
}
