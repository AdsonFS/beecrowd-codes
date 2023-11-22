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
const int MAX = 1e6+6;
int a[MAX], w[MAX];
int T, N, K;

struct node {
	int v;
	node *L, *R;
	node() { v = 0; L = R = NULL; }
};

void add_node(node * no) {
	if(no->L == NULL) no->L = new node();
	if(no->R == NULL) no->R = new node();
}

void update(node * no, int i, int j, int p, int v) {
	add_node(no);
	if(i > p || j < p) return;
	if(i == j) { no->v = max(no->v, v); return; }
	update(no->L, i, (i+j)/2, p, v);
	update(no->R, (i+j)/2+1, j, p, v);
	no->v = max(no->L->v, no->R->v);
}

int query(node * no, int i, int j, int s, int e) {
	add_node(no);
	if(i > e || j < s) return 0;
	if(i >= s && j <= e) return no->v;
	return max(query(no->L, i, (i+j)/2, s, e), query(no->R, (i+j)/2+1, j, s, e));
}

int main(int argc, char ** argv) {
	scanf("%d", &T);
	rep(t, 0, T) {
		node * no;
		no = new node();
		scanf("%d%d", &N, &K);
		REP(i, 1, N) scanf("%d", a+i);
		REP(i, 1, N) scanf("%d", w+i);
		REP(i, 1, N) {
			int now = query(no, 1, 1e6, 1, a[i]-K)+w[i];
			update(no, 1, 1e6, a[i], now);
		}
		printf("%d\n", no->v);
	}
	return 0;
}
