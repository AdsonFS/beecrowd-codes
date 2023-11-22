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
	void prefixa() {
		printf(" %d", v);
		if(esq != NULL) esq->prefixa();
		if(dir != NULL) dir->prefixa();
	}
	void infixa() {
		if(esq != NULL) esq->infixa();
		printf(" %d", v);
		if(dir != NULL) dir->infixa();
	}
	void posfixa() {
		if(esq != NULL) esq->posfixa();
		if(dir != NULL) dir->posfixa();
		printf(" %d", v);
	}
};

int main(int argc, char** argv) {
	int c, n, x, h = 0;
	scanf("%d", &c);
	while(scanf("%d", &n) != EOF) {
		scanf("%d", &x);
		no root(x);
		rep(i, 1, n) {
			scanf("%d", &x);
			root.addEdge(x);
		}
		printf("Case %d:\n", ++h);
		printf("Pre.:");
		root.prefixa();
		printf("\n");
		printf("In..:");
		root.infixa();
		printf("\n");
		printf("Post:");
		root.posfixa();
		printf("\n\n");
		
	}
	return 0;
}
