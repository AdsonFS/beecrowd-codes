#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 306000
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[MAX];
int n, k, ind;

int busca(int ini, int fim) {
	int mid = (ini + fim) / 2;
	if(vet[mid] == k) return mid;
	if(vet[mid] > k) return busca(ini, mid - 1);
	return busca(mid + 1, fim);
}

int main(int argc, char ** argv) {
	while(scanf("%d", &n) != EOF) {
		bool ok = true;
		for(int i = 1; i <= n; i++)
			scanf("%d", &vet[i]);
		scanf("%d", &k);
		ind = busca(1, n);
		int p = 2;
		while(p <= ind) {
			if(ind % p == 0) {
				ok = false;
				break;
			}
			ind = ind - (ind / p);
			p++;
		}
		if(ok) printf("Y\n");
		else printf("N\n");
	}
	return 0;
}
