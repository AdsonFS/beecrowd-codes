#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define all(S) (S).begin(), (S).end()
#define pb push_back
#define mk make_pair
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
const int MAX = 1e5+5;
ll tree[4 * MAX];
ll lazy[4 * MAX];

void propagate(int no, int i, int j) {
	if(!lazy[no]) return;
	tree[no] += (j-i+1) * lazy[no];
	if(i != j) {
		lazy[no*2] += lazy[no];
		lazy[no*2+1] += lazy[no];
	}
	lazy[no] = 0;
}

void update(int no, int i, int j, int l, int r, int v) {
	propagate(no, i, j);
	if(i > r || j < l) return;
	if(i >= l && j <= r) {
		lazy[no] += v;
		propagate(no, i, j);
		return;
	}
	update(no*2, i, (i+j)/2, l, r, v);
	update(no*2+1, (i+j)/2+1, j, l, r, v);
	tree[no] = tree[no*2] + tree[no*2+1];
}

ll query(int no, int i, int j, int l, int r) {
	propagate(no, i, j);
	if(i > r || j < l) return 0;
	if(i >= l && j <= r) return tree[no];
	return 	query(no*2, i, (i+j)/2, l, r) +
			query(no*2+1, (i+j)/2+1, j, l, r);
}

int main(int argc, char** argv) {
	ios_base::sync_with_stdio(false); cin.tie(NULL);
	int T, N, Q, op, l, r, v;
	cin >> T;
	while(T--) {
		cin >> N >> Q;
		memset(tree, 0, sizeof tree);
		memset(lazy, 0, sizeof lazy);
		rep(i, 0, Q) {
			cin >> op;
			if(op == 0) {
				cin >> l >> r >> v;
				update(1, 1, N, l, r, v);
			} else {
				cin >> l >> r;
				cout << query(1, 1, N, l, r) << "\n";
			}
		}
	}
	return 0;
}
