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

struct aluno {
	string nome;
	int p;
};

bool comp(const aluno &a1, const aluno &a2) {
	if(a1.p != a2.p)
		return (a1.p > a2.p);
	return (a1.nome < a2.nome);
}

int main(int argc, char * * argv) {
	aluno a;
	int n, x;
	int h = 0;
	while(scanf("%d", &n) && n != 0) {
		vector<aluno> num;
		int m = n;
		while(m--) {
			int sum = 0;
			int maior = -1;
			int menor = INF;
			cin >> a.nome;
			for(int i = 0; i < 12; i++) {
				scanf("%d", &x);
				maior = max(maior, x);
				menor = min(menor, x);
				sum += x;
			}
			sum = sum - maior - menor;
			a.p = sum;
			num.pb(a);
		}
		int j = 1;
		sort(all(num), comp);
		a.p = -1;
		num.pb(a);
		printf("Teste %d\n", ++h);
		for(int i = 1; i <= n; i++) {
			if(num[i-1].p != num[i-2].p)
				j = i;
			printf("%d %d %s\n", j, num[i-1].p, num[i-1].nome.c_str());
		}
		printf("\n");
	}
	
	return 0;
}
