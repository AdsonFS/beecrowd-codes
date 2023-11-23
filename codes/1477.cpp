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
typedef pair<ii, ii> pii;
const int MAX = 1e5+5;
pii tree[4*MAX];
int N, M;
char c;

pii merge(pii a, pii b) {
	ii p1 = mk(a.F.F+b.F.F, a.F.S+b.F.S);
	ii p2 = mk(a.S.F+b.S.F, a.S.S+b.S.S);
	return mk(p1, p2);
}

void build(int no, int i, int j) {
	if(i == j) {
		tree[no] = mk(mk(0, 1), mk(0, 0));
		return;
	}
	build(no*2, i, (i+j)/2);
	build(no*2+1, (i+j)/2+1, j);
	tree[no] = merge(tree[no*2], tree[no*2+1]);
}

void propagate(int no, int i, int j) {
	tree[no].F.F %= 3;
	if(!tree[no].F.F) return;
	rep(k, 0, tree[no].F.F) {
		ii p1 = mk(tree[no].F.F, tree[no].S.S);
		ii p2 = mk(tree[no].F.S, tree[no].S.F);
		tree[no] = mk(p1, p2);
	}
	if(i != j) {
		tree[no*2].F.F += tree[no].F.F;
		tree[no*2+1].F.F += tree[no].F.F;
	}
	tree[no].F.F = 0;
}

void update(int no, int i, int j, int l, int r) {
	propagate(no, i, j);
	if(i > r || j < l) return;
	if(i >= l && j <= r) {
		tree[no].F.F++;
		propagate(no, i, j);
		return;
	}
	update(no*2, i, (i+j)/2, l, r);
	update(no*2+1, (i+j)/2+1, j, l, r);
	tree[no] = merge(tree[no*2], tree[no*2+1]);
}

pii query(int no, int i, int j, int l, int r) {
	propagate(no, i, j);
	if(i > r || j < l) return mk(mk(0, 0), mk(0, 0));
	if(i >= l && j <= r) return tree[no];
	return merge(query(no*2, i, (i+j)/2, l, r),
		query(no*2+1, (i+j)/2+1, j, l, r));
}

int main(int argc, char ** argv) {
	while(scanf("%d%d", &N, &M) != EOF) {
		build(1, 1, N);
		int l, r;
		rep(i, 0, M) {
			scanf(" %c %d%d", &c, &l, &r);
			if(c == 'M')
				update(1, 1, N, l, r);
			else {
				pii ans =query(1, 1, N, l, r);
				printf("%d %d %d\n", ans.F.S, ans.S.F, ans.S.S);
			}
		}
		printf("\n");
	}
	return 0;
}
