#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1000005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

struct pessoa {
	int pontos;
	string nome;
	int a[10], b[10], r[10];
};

bool comp(const pessoa &p1, const pessoa &p2) {
	if(p1.pontos != p2.pontos)
		return (p1.pontos > p2.pontos);
	return (p1.nome < p2.nome);
}

int main(int argc, char** argv) {
	pessoa pp;
	string lixo;
	int n, m, x1, x2, res;
	while(scanf("%d%d", &n, &m) && (n+m) != 0) {
		pp.pontos = 0;
		vector<pessoa> num;
		for(int i = 0; i < n; i++) {
			cin >> pp.nome;
			for(int j = 0; j < m; j++) {
				cin >> lixo >> pp.a[j] >> lixo >> pp.b[j];
				if(pp.a[j] > pp.b[j]) pp.r[j] = 1;
				else if(pp.a[j] < pp.b[j]) pp.r[j] = 2;
				else pp.r[j] = 0;
			}
			num.pb(pp);
		}
		for(int i = 0; i < m; i++) {
			cin >> lixo >> x1 >> lixo >> x2;
			for(int j = 0; j < n; j++) {
				pp = num[j];
				if(x1 > x2) res = 1;
				else if(x1 < x2) res = 2;
				else res = 0;
				
				if(pp.a[i] == x1 && pp.b[i] == x2)
					pp.pontos += 10;
				else if(res == pp.r[i] && (pp.a[i] == x1 || pp.b[i] == x2))
					pp.pontos += 7;
				else if(res == pp.r[i])
					pp.pontos += 5;
				else if(pp.a[i] == x1 || pp.b[i] == x2)
					pp.pontos += 2;
				num[j] = pp;
			}
		}
		sort(all(num), comp);
		for(int i = 0; i < n; i++)
			printf("%s %d\n", num[i].nome.c_str(), num[i].pontos);
	}
	return 0;
}
