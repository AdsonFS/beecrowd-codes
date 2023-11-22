#include <bits/stdc++.h>
using namespace std;

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
int vet[MAX];

int main(int argc, char * * argv) {
	int n, x1, x2;
	int maior;
	int h = 0;
	while(scanf("%d", &n) && n != 0) {
		vector<int> num;
		maior = -1;
		for(int i = 0; i < n; i++) {
			scanf("%d%d", &x1, &x2);
			if(x2 > maior) {
				maior = x2;
				num.clear();
				num.pb(x1);
			}
			else if(x2 == maior)
				num.pb(x1);
		}
		int tam = num.size();
		printf("Turma %d\n", ++h);
		for(int i = 0; i < tam; i++) {
			printf("%d ", num[i]);
		}
		printf("\n\n");
	}
	return 0;
}
