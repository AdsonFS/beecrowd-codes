	#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define pf push_front
#define mk make_pair
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
bool ok;
int n;

struct deck {
	deck * ant;
	int q, v;
	deck(int v) {
		q = 0;
		this->v = v;
		ant = NULL;
	}
	void add(int V) {
		if(ant == NULL) ant = new deck(V);
		else ant->add(V);
	}
	void search() {
		if(v == -1) return;
		if(ant->q) ant->search();
		else if(ant->v >= v) {
			n--; q++;
			v = ant->v;
			ant = ant->ant;
			ok = true;
		}
		else
			ant->search();
	}
};

int main(int argc, char** argv) {
	int vet[60];
	scanf("%d", &n);
	REP(i, 1, n)
		scanf("%d", &vet[i]);
	deck root(vet[n]);
	for(int i = n-1; i >= 1; i--)
		root.add(vet[i]);
	root.add(-1);
	ok = true;
	while(ok) {
		ok = false;
		root.search();
	}
	printf("%d\n", n);
	return 0;
}









