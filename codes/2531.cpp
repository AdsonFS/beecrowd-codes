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
const int MAX = 1e5+5;
int tree[4*MAX][2];
int N, Q, a[MAX];

void build(int no, int i, int j) {
	if(i == j) tree[no][0] = tree[no][1] = a[i];
	if(i == j) return;
	int L = no*2, R = L+1, m = (i+j)/2;
	build(L, i, m); build(R, m+1, j);
	tree[no][0] = max(tree[L][0], tree[R][0]);
	tree[no][1] = min(tree[L][1], tree[R][1]);
}

void update(int no, int i, int j, int p, int v) {
	if(i > p || j < p) return;
	if(i == j) tree[no][0] = tree[no][1] = v;
	if(i == j) return;
	int L = no*2, R = L+1, m = (i+j)/2;
	update(L, i, m, p, v); update(R, m+1, j, p, v);
	tree[no][0] = max(tree[L][0], tree[R][0]);
	tree[no][1] = min(tree[L][1], tree[R][1]);
}

int query(int no, int i, int j, int u, int v, int k) {
	if(i > v || j < u) return k ? (1 << 30) : 0;
	if(i >= u && j <= v) return tree[no][k];
	int L = no*2, R = L+1, m = (i+j)/2;
	if(!k) return max(query(L, i, m, u, v, k), query(R, m+1, j, u, v, k));
	return min(query(L, i, m, u, v, k), query(R, m+1, j, u, v, k));
}

int main(int argc, char ** argv) {
	int op, u, v;
	while(scanf("%d", &N) != EOF) {
		REP(i, 1, N) scanf("%d", &a[i]);
		build(1, 1, N);
		scanf("%d", &Q);
		rep(q, 0, Q) {
			scanf("%d%d%d", &op, &u, &v);
			if(op == 1) update(1, 1, N, u, v);
			else printf("%d\n", query(1, 1, N, u, v, 0)-query(1, 1, N, u, v, 1));
		}
		memset(tree, 0, sizeof tree);
	}
	return 0;
}
