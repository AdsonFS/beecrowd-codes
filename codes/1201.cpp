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
bool ok;

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
		printf("%s%d", ok ? "" : " ", v);
		ok = false;
		if(esq != NULL) esq->prefixa();
		if(dir != NULL) dir->prefixa();
	}
	void infixa() {
		if(esq != NULL) esq->infixa();
		printf("%s%d", ok ? "" : " ", v);
		ok = false;
		if(dir != NULL) dir->infixa();
	}
	void posfixa() {
		if(esq != NULL) esq->posfixa();
		if(dir != NULL) dir->posfixa();
		printf("%s%d", ok ? "" : " ", v);
		ok = false;
	}
	bool search(int V) {
		if(v == V) return true;
		if(V > v && dir != NULL) return dir->search(V);
		if(V < v && esq != NULL) return esq->search(V);
		return false;
	}
	bool empty() {
		return (esq == NULL && dir == NULL);
	}
	bool only_dir() {
		return (esq == NULL && dir != NULL);
	}
	bool only_esq() {
		return (esq != NULL && dir == NULL);
	}
	int bigger() {
		int ans = v;
		if(dir != NULL) ans = max(ans, dir->bigger());
		if(esq != NULL) ans = max(ans, esq->bigger());
		return ans;
	}
	void remove(int V) {
		if(V < v) {
			if(esq->v == V) {
				if(esq->empty())
					esq = NULL;
				else if(esq->only_dir())
					esq = esq->dir;
				else if(esq->only_esq())
					esq = esq->esq;
				else {
					int aux = esq->esq->bigger();
					remove(aux);
					esq->v = aux;
				}
			}
			else 
				esq->remove(V);
		}
		else if(V > v) {
			if(dir->v == V) {
				if(dir->empty()) dir = NULL;
				else if(dir->only_dir())
					dir = dir->dir;
				else if(dir->only_esq())
					dir = dir->esq;
				else {
					int aux = dir->esq->bigger();
					remove(aux);
					dir->v = aux;
				}
			}
			else
				dir->remove(V);
		}
	}
};

int main(int argc, char** argv) {
	int v;
	char OP[15];
	no root(-1);
	while(scanf(" %s", OP) != EOF) {
		ok = true;
		string op = OP;
		if(op == "I") {
			scanf("%d", &v);
			root.addEdge(v);
		}
		else if(op == "P") {
			scanf("%d", &v);
			printf("%d %s\n", v, root.search(v) ? "existe" : "nao existe");
		}
		else if(op == "R") {
			scanf("%d", &v);
			if(root.search(v))
				root.remove(v);
		}
		else if(op == "INFIXA") {
			root.dir->infixa();
			printf("\n");
		}
		else if(op == "PREFIXA") {
			root.dir->prefixa();
			printf("\n");
		}
		else {
			root.dir->posfixa();
			printf("\n");
		}
	}
	return 0;
}
