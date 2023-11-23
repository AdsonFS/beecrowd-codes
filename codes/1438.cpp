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
int vet[1001];
int n, p, x;

int dir(int pilha, int ind) {
	int sum = vet[pilha] - ind;
	for(int i = pilha + 1; i <= p; i++) {
		if(vet[i] >= ind)
			sum += vet[i] - ind + 1;
		else
			break;
	}
	return sum;
}

int esq(int pilha, int ind) {
	int sum = vet[pilha] - ind;
	for(int i = pilha - 1; i >= 1; i--) {
		if(vet[i] >= ind)
			sum += vet[i] - ind + 1;
		else
			break;
	}
	return sum;
}

int main(int argc, char** argv) {
	int pilha, ind;
	while(scanf("%d%d", &n, &p) && (n+p) != 0) {
		int sum = 0;
		for(int i = 1; i <= p; i++) {
			scanf("%d", &vet[i]);
			for(int j = 1; j <= vet[i]; j++) {
				scanf("%d", &x);
				if(x == 1) {
					pilha = i;
					ind = j;
				}
			}
		}
		sum = min(dir(pilha, ind), esq(pilha, ind));
		printf("%d\n", sum);
	}
	return 0;
}
