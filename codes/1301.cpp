#include <bits/stdc++.h>
using namespace std;

//LIFE IS NOT A PROBLEM TO BE SOLVED

#define rep(i,a,b) for( int i = (int) a; i < (int) b; i++ )
#define pb push_back
#define MAX 1000001
#define S second
#define mod 1000
#define F first

typedef long long int ll;
typedef pair<int, int> ii;
ll tree[4 * MAX], lazy[4 * MAX];
ll a[MAX];
int N, Q;

void build(int no, int i, int j) {
	if(i > j) return;
	if(i == j) {
		tree[no] = a[i];
		return;
	}
	int L = no * 2, R = L + 1, mid = (i + j) / 2;
	build(L, i, mid);
	build(R, mid + 1, j);
	tree[no] = ((tree[L] % mod) * (tree[R] % mod)) % mod;
}


ll query(int no, int i, int j, int a, int b) {
	if(i > j || i > b || j < a) return 1;
	if(i >= a && j <= b) return tree[no];
	int L = no * 2, R = no * 2 + 1, mid = (i + j) / 2;
	return (query(L, i, mid, a, b) % mod) * query(R, mid + 1, j, a, b);
}

void update(int no, int i, int j, int a, int b, ll v) {
	if(i > j || i > b || j < a) return;
	if(i >= a && j <= b) {
		//   lazy[no] += v;
		//     propagate(no, i, j);
		tree[no] = v;
		return;
	}
	int L = no * 2, R = L + 1, mid = (i + j) / 2;
	update(L, i, mid, a, b, v);
	update(R, mid + 1, j, a, b, v);
	tree[no] = tree[L] * tree[R];
}

int main() {
	ll x, x1, x2;
	char op;
	while(scanf("%d%d", & N, & Q) != EOF) {
		memset(lazy, 0, sizeof(lazy));
		memset(tree, 0, sizeof(tree));
		memset(a, 0, sizeof(a));

		for(int i = 0; i < N; i++) {
			cin >> x;
			if(x > 0)
				a[i] = 1;
			else if(x < 0)
				a[i] = -1;
			else
				a[i] = 0;
		}
		build(1, 0, N - 1);
		for(int i = 0; i < Q; i++) {
			cin >> op >> x1 >> x2;
			if(op == 'P') {
				ll X =  query(1, 0, N - 1, x1 - 1, x2 - 1);
				if(X > 0)
					printf("+");
				else if(X < 0)
					printf("-");
				else
					printf("0");
			} else {
				if(x2 > 0)
					x2 = 1;
				else if(x2 < 0)
					x2 = -1;
				else
					x2 = 0;
				update(1, 0, N - 1, x1 - 1, x1 - 1, x2);
			}
		}
		printf("\n");
	}

	return 0;
}
