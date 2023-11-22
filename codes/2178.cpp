#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main() {
	int vet[MAX];
	int n, a, p, vm = 1, va;
	scanf("%d%d", &a, &p);
	while(a--) {
		va = 1;
		scanf("%d", &n);
		scanf("%d", vet);
		for(int i = 1; i < n; i++) {
			scanf("%d", vet + i);
			if(vet[i] < vet[i-1] && vet[i] != 0)
				va++;
			else if(vet[i-1] == 0)
				va++;
		}
		vm = max(vm, va);
	}
	printf("%d\n", vm);
	return 0;
}
