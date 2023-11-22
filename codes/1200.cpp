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
	char v;
	no* esq;
	no* dir;
	no(char V) {
		v = V;
		esq = NULL;
		dir = NULL;
	}
	void addEdge(char u) {
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
		printf("%s%c", ok ? "" : " ", v);
		ok = false;
		if(esq != NULL) esq->prefixa();
		if(dir != NULL) dir->prefixa();
	}
	void infixa() {
		if(esq != NULL) esq->infixa();
		printf("%s%c", ok ? "" : " ", v);
		ok = false;
		if(dir != NULL) dir->infixa();
	}
	void posfixa() {
		if(esq != NULL) esq->posfixa();
		if(dir != NULL) dir->posfixa();
		printf("%s%c", ok ? "" : " ", v);
		ok = false;
	}
	bool search(char V) {
		if(v == V) return true;
		if(V > v && dir != NULL) return dir->search(V);
		if(V < v && esq != NULL) return esq->search(V);
		return false;
	}
};

int main(int argc, char** argv) {
	char v;
	char OP[15];
	scanf(" %s %c", OP, &v);
	no root(v);
	while(scanf(" %s", OP) != EOF) {
		ok = true;
		string op = OP;
		if(op == "I") {
			scanf(" %c", &v);
			root.addEdge(v);
		}
		else if(op == "P") {
			scanf(" %c", &v);
			printf("%c %s\n", v, root.search(v) ? "existe" : "nao existe");
		}
		else if(op == "INFIXA") {
			root.infixa();
			printf("\n");
		}
		else if(op == "PREFIXA") {
			root.prefixa();
			printf("\n");
		}
		else {
			root.posfixa();
			printf("\n");
		}
	}
	return 0;
}

