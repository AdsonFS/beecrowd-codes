#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = "<< x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 1010
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[10];

int main(int argc, char** argv) {
	char dig[1100];
	while(scanf(" %s", dig) != EOF) {
		memset(vet, 0, sizeof(vet));
		int ans = -1;
		int best = -1;
		int tam = strlen(dig);
		rep(i, 0, tam) {
			int v = (dig[i] - '0');
			vet[v]++;
			if(vet[v] > best || (vet[v] == best && v > ans)) {
				best = vet[v];
				ans = v;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
