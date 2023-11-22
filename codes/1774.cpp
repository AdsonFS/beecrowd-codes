#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAXM 50010
#define MAXN 50010
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

struct t_aresta {
	int dis;
	int x, y;
};

bool comp(t_aresta a, t_aresta b) {
	return a.dis < b.dis;
}

t_aresta aresta[MAXM];
int n, m;

// para o union find
int pai[MAXN];
int peso[MAXN];

// a árvore
t_aresta mst[MAXM];
//--------------------

// funções do union find
int find(int x) {
	if(pai[x] == x) return x;
	return pai[x] = find(pai[x]);
}

void join(int a, int b) {
	a = find(a);
	b = find(b);
	if(peso[a] < peso[b]) pai[a] = b;
	else if(peso[b] < peso[a]) pai[b] = a;
	else {
		pai[a] = b;
		peso[b]++;
	}
}


int main() {
	scanf("%d%d", & n, & m);
	for(int i = 1; i <= m; i++)
		cin >> aresta[i].x >> aresta[i].y >> aresta[i].dis;
	for(int i = 1; i <= n; i++)
		pai[i] = i;
	sort(aresta + 1, aresta + m + 1, comp);
	int size = 0;
	for(int i = 1; i <= m; i++) {
		if( find(aresta[i].x) != find(aresta[i].y) ) {
			join(aresta[i].x, aresta[i].y);
			mst[++size] = aresta[i];
		}
	}
	// imprimir a MST
	int soma = 0;
	for(int i = 1; i < n; i++)
		soma += mst[i].dis;
	printf("%d\n", soma);
	return 0;
}
