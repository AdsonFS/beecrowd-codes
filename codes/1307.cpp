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
	crivo();
	setar();
	int n, h = 1;
	string x1, x2;
	scanf("%d", &n);
	while(n--) {
		cin >> x1 >> x2;
		bool ok = false;
		int tam1 = x1.size() - 1;
		int tam2 = x2.size() - 1;
		int v1 = 0, v2 = 0;
		for(int i = tam1, j = 0; i >= 0; i--, j++) {
			v1 += (x1[i] - '0') * pow(2, j);
		}
		for(int i = tam2, j = 0; i >= 0; i--, j++) {
			v2 += (x2[i] - '0') * pow(2, j);
		}
		int v = min(v1, v2);
		int tam = primos.size();
		for(int i = 0; i < tam; i++) {
			if(v1 % primos[i] == 0 && v2 % primos[i] == 0) {
				ok = true;
				break;
			}
			if(primos[i] > v)
				break;
		}
		if(ok) 	printf("Pair #%d: All you need is love!\n", h++);
		else 	printf("Pair #%d: Love is not all you need!\n", h++);
	}
	
	return 0;
}

