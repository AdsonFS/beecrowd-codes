#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
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
typedef pair<double, int> di;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	char vet[MAX];
	while(scanf(" %[^\n]", vet) != EOF) {
		int tam = strlen(vet);
		char aux[MAX];
		int sum = 0;
		rep(i, 0, tam) {
			char c = tolower(vet[i]);
			if(c == ' ') continue;
			sum += 1 + ((c - 97) % 9);
		}
		while(sum > 9) {
			sprintf(aux, "%d", sum);
			sum = 0;
			tam = strlen(aux);
			rep(i, 0, tam)
				sum += (aux[i] - '0');
		}
		printf("%d\n", sum);
	}
	return 0;
}
