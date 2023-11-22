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
int n, m, x, aux;
int vet[MAX];

int busca(int ini, int fim) {
	int mid = (ini+fim) / 2;
	int res = aux + vet[mid];
	if(fim < ini) return -INF;
	if(res == m) return vet[mid];
	if(res > m) return busca(ini, mid - 1);
	return busca(mid+1, fim);
}

int main(int argc, char** argv) {
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		scanf("%d", &vet[i]);
	scanf("%d", &m);
	for(int i = 0; i < n; i++) {
		aux = vet[i];
		x = busca(i+1, n-1);
		if(aux + x == m) {
			printf("%d %d\n", aux, x);
			break;
		}
	}
	return 0;
}
