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
int N, K, T, t, l, r;
int tree[2][MAX];
vector<int> num;
int lazy[MAX];
bool die[MAX];

void propagate(int no, int i, int j) {
	if(!lazy[no]) return;
	tree[0][no] = tree[1][no] = lazy[no];
	if(i != j) lazy[no*2] = lazy[no*2+1] = lazy[no];
	lazy[no] = 0;
}

void update(int no, int i, int j) {
	if(die[no]) return;
	if(i > r || j < l) return;
	propagate(no, i, j);
	if(i >= l && j <= r) {
		if(tree[0][no]+T >= t) {
			lazy[no] = t;
			propagate(no, i, j);
		}
		else if(tree[1][no]+T < t) {
			tree[0][no] = tree[0][no] = -T;
			die[no] = 1;
		}
		else {
			update(no*2, i, (i+j)/2);
			update(no*2+1, (i+j)/2+1, j);
			tree[0][no] = min(tree[0][no*2], tree[0][no*2+1]);
			tree[1][no] = max(tree[1][no*2], tree[1][no*2+1]);
		}
		return;
	}
	update(no*2, i, (i+j)/2);
	update(no*2+1, (i+j)/2+1, j);
	tree[0][no] = min(tree[0][no*2], tree[0][no*2+1]);
	tree[1][no] = max(tree[1][no*2], tree[1][no*2+1]);
}

void query(int no, int i, int j, int x) {
	if(die[no]) return;
	if(i > x || j < x) return;
	if(i == j) { l = 1; return; }
	query(no*2, i, (i+j)/2, x);
	query(no*2+1, (i+j)/2+1, j, x);
}

int main(int argc, char ** argv) {
	while(scanf("%d%d%d", &N, &K, &T) != EOF) {
		memset(lazy, 0, sizeof lazy);
		memset(tree, 0, sizeof tree);
		memset(die, 0, sizeof die);
		num.clear();
		REP(k, 1, K) {
			t = k;
			scanf("%d%d", &l, &r);
			update(1, 1, N);
		}
		t = K+1; l = 1; r = N;
		update(1, 1, N);
		REP(i, 1, N) {
			l = 0;
			query(1, 1, N, i);
			if(l) num.pb(i);
		}
		printf("%d", num.size());
		rep(i, 0, (int)num.size()) printf(" %d", num[i]);
		printf("\n");
	}
	return 0;
}
