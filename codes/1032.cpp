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
vector<int> primos;
bool primo[MAX];

void crivo() {
	primo[0] = true;
	primo[1] = true;
	int tam = sqrt(MAX);
	for(int i = 3; i < tam; i += 2) {
		if(!primo[i]) {
			for(int j = i * i; j < MAX; j += i)
				primo[j] = true;
		}
	}
}

void setar() {
	primos.pb(2);
	for(int i = 3; i < MAX; i += 2) {
		if(!primo[i])
			primos.pb(i);
	}
}

int main(int argc, char** argv) {
	int n;
	crivo();
	setar();
	while(scanf("%d", &n) && n != 0) {
		queue<int> fila;
		for(int i = 1; i <= n; i++)
			fila.push(i);
		int p = 0;
		while(fila.size() != 1) {
			int k = (primos[p] - 1) % fila.size();
			for(int i = 0; i < k; i++) {
				fila.push(fila.front());
				fila.pop();
			}
			fila.pop();
			p++;
		}
		printf("%d\n", fila.front());
	}
	return 0;
}
