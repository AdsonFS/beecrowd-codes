#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	string str[MAX];
	string aux;
	int n, m;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
		cin >> str[i];
	scanf("%d", &m);
	while(m--) {
		cin >> aux;
		int cont = 0;
		int maior = 0;
		for(int i = 0; i < n; i++) {
			int tam = str[i].size();
			if(str[i].find(aux) == 0) {
				maior = max(maior, tam);
				cont++;
			}
		}
		if(cont) printf("%d %d\n", cont, maior);
		else printf("-1\n");
	}
	return 0;
}
