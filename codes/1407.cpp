#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 125000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[101];

int main(int argc, char** argv) {
	int n, c, k, x, h, menor;
	while(scanf("%d%d%d", &n, &c, &k) && (n+c+k) != 0) {
		for(int i = 0; i < n; i++) {
			for(int j = 0; j < c; j++) {
				scanf("%d", &x);
				vet[x]++;
			}
		}
		h = 1;
		menor = vet[1];
		for(int i = 1; i <= k; i++)
			menor = min(menor, vet[i]);
		for(int i = 1; i <= k; i++) {
			if(vet[i] == menor && h) {
				printf("%d", i);
				h = 0;
			}
			else if(vet[i] == menor)
				printf(" %d", i);
			vet[i] = 0;
		}
		printf("\n");
	}
	return 0;
}
