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
int pot[12];

int main(int argc, char** argv) {
	int n, v;
	char bin[20];
	pot[0] = 1;
	for(int i = 1; i < 12; i++)
		pot[i] = pot[i-1] * 2;
		
	while(scanf("%d", &n) != EOF) {
		while(n--) {
			scanf(" %s", bin);
			v = 0;
			int tam = strlen(bin) - 1;
			for(int i = tam, j = 0; i >= 0; i--, j++)
				v += (bin[i] - '0') * pot[j];
			printf("%c", (char)v);
		}
		printf("\n");
	}
	return 0;
}
