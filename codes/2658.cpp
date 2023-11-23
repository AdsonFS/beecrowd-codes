#include <bits/stdc++.h>
using namespace std;
 
#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pf push_front
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
const int MAX = 4e5+5;
int num[10], aux[10];
int tree[MAX][10];
int lazy[MAX];

int get() {
	ii x = mk(-1, 0);
	REP(i, 0, 8) {
		if(aux[i] >= x.F)
			x.F = aux[i], x.S = i;
		aux[i] = 0;
	}
	return x.S;
}

void propagate(int no, int i, int j) {
	if(!lazy[no]) return;
	REP(k, 0, 8) num[(k+lazy[no])%9] = tree[no][k];
	REP(k, 0, 8) tree[no][k] = num[k];
	if(i != j) {
		lazy[no*2] = (lazy[no*2] + lazy[no]) % 9;
		lazy[no*2+1] = (lazy[no*2+1] + lazy[no]) % 9;
	}
	lazy[no] = 0;
}

void build(int no, int i, int j) {
	if(i == j) { tree[no][1] = 1; return; }
	int L = no*2, R = L+1, m = (i+j)/2;
	build(L, i, m); build(R, m+1, j);
	tree[no][1] = tree[L][1] + tree[R][1];
}

void query(int no, int i, int j, int l, int r) {
	propagate(no, i, j);
	if(i > r || j < l) return;
	if(i >= l && j <= r) {
		REP(k, 0, 8) aux[k] += tree[no][k];
		return;
	}
	int L = no*2, R = L+1, m = (i+j)/2;
	query(L, i, m, l, r); query(R, m+1, j, l, r);
}

void update(int no, int i, int j, int l, int r, int x) {
	propagate(no, i, j);
	if(i > r || j < l) return;
	if(i >= l && j <= r) { 
		lazy[no] += x;
		propagate(no, i, j);
		return;
	}
	int L = no*2, R = L+1, m = (i+j)/2;
	update(L, i, m, l, r, x); update(R, m+1, j, l, r, x);
	REP(k, 0, 8) tree[no][k] = tree[L][k] + tree[R][k];
}

int main(int argc, char ** argv) {
	int N, Q, u, v;
	scanf("%d%d", &N, &Q);
	build(1, 0, --N);
	rep(q, 0, Q) {
		scanf("%d%d", &u, &v);
		query(1, 0, N, u, v);
		update(1, 0, N, u, v, get());
	}
	REP(i, 0, N) {
		query(1, 0, N, i, i);
		printf("%d\n", get());
	}
	return 0;
}
