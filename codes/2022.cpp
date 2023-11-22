#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = "<< x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

struct lista {
	string nome;
	double p;
	int v;
};

bool comp(const lista &l1, const lista &l2) {
	if(l1.v != l2.v) return (l1.v > l2.v);
	if(l1.p != l2.p) return (l1.p < l2.p);
	return (l1.nome < l2.nome);
}

int main(int argc, char** argv) {
	int n;
	lista ll;
	char nome[MAX];
	char item[MAX];
	while(scanf(" %s %d", nome, &n) != EOF) {
		vector<lista> num;
		rep(i, 0, n) {
			scanf(" %[^\n]", item);
			scanf("%lf%d", &ll.p, &ll.v);
			ll.nome = item;
			num.pb(ll);
		}
		sort(all(num), comp);
		printf("Lista de %s\n", nome);
		rep(i, 0, n) printf("%s - R$%.2lf\n", num[i].nome.c_str(), num[i].p);
		printf("\n");
	}
	return 0;
}
