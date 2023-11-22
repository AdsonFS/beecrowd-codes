#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
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
int t, n, x, h;

struct no{
	int v;
	no* esq;
	no* dir;
	no(int V) {
		v = V;
		esq = NULL;
		dir = NULL;
	}
	void addEdge(int u) {
		if(u > v) {
			if(dir == NULL) dir = new no(u);
			else dir->addEdge(u);
		}
		if(u < v) {
			if(esq == NULL) esq = new no(u);
			else esq->addEdge(u);
		}
	}
	void bfs() {
		no *now = this;
		printf("%d", now->v);
		queue<no*> fila;
		if(now->esq != NULL) fila.push(now->esq);
		if(now->dir != NULL) fila.push(now->dir);
		while(!fila.empty()) {
			now = fila.front();
			printf(" %d", now->v);
			fila.pop();
			if(now->esq != NULL) fila.push(now->esq);
			if(now->dir != NULL) fila.push(now->dir);
		}
		printf("\n\n");
	}
};

int main(int argc, char** argv) {
	scanf("%d", &t);
	while(t--) {
		scanf("%d%d", &n, &x);
		no root(x);
		rep(i, 1, n) {
			scanf("%d", &x);
			root.addEdge(x);
		}
		printf("Case %d:\n", ++h);
		root.bfs();
	}
	return 0;
}
