#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char * * argv) {
	int t, h = 1, T, K = 0;
	double sum = 0, x;
	char nome[MAX];
	scanf("%d", &t);
	T = t;
	while(t--) {
		int p = 1;
		cin >> x;
		sum += x;
		cin.ignore();
		cin.getline(nome, MAX);
		int tam = strlen(nome);
		for(int i = 0; i < tam; i++) {
			if(nome[i] == ' ')
				p++;
		}
		K += p;
		printf("day %d: %d kg\n", h++, p);
	}
	printf("%.2lf kg by day\n", (double)(1.0 * K / T));
	printf("R$ %.2lf by day\n", (double)(sum / T));
	return 0;
}
