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
const int MAXT = 80*MAX;
int a[MAX], tree[MAXT];
int L[MAXT], R[MAXT];
int T, N, Q, cnt;

void build(int no, int i, int j) {
	if(i == j) { tree[no] = a[i]; return; }
	L[no] = ++cnt; R[no] = ++cnt;
	build(L[no], i, (i+j)/2);
	build(R[no], (i+j)/2+1, j);
	tree[no] = tree[L[no]] + tree[R[no]];
}

int update(int no, int i, int j, int p, int v) {
	int NO = ++cnt;
	if(i == j) { tree[NO] = v; return NO; }
	L[NO] = L[no]; R[NO] = R[no];
	if(p <= (i+j)/2) L[NO] = update(L[NO], i, (i+j)/2, p, v);
	else R[NO] = update(R[NO], (i+j)/2+1, j, p, v);
	tree[NO] = tree[L[NO]] + tree[R[NO]];
	return NO;
}

int query(int no, int i, int j, int l, int r) {
	if(i > r || j < l) return 0;
	if(i >= l && j <= r) return tree[no];
	return query(L[no], i, (i+j)/2, l, r) + query(R[no], (i+j)/2+1, j, l, r);
}

int main(int argc, char * * argv) {
	int op, l, r, k, sz;
	scanf("%d", &T);
	rep(t, 0, T) {
		cnt = 0;
		vector<int> num;
		scanf("%d", &N);
		REP(i, 1, N) scanf("%d", a+i);
		build(0, 1, N);
		num.pb(0);
		scanf("%d", &Q);
		rep(i, 0, Q) {
			sz = num.size()-1;
			scanf("%d", &op);
			if(op == 1) {
				scanf("%d%d%d", &l, &r, &k);
				printf("%d\n", query(num[k], 1, N, l, r));
			}
			else {
				scanf("%d%d", &l, &r);
				num.pb(update(num[sz], 1, N, l, r));
			}
		}
		memset(tree, 0, sizeof tree);
	}
	return 0;
}
