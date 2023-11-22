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

typedef struct node {
	struct node *L,  *R;
	int prior, size;
	int sum, val;
	int rev;
} node;

typedef node* pnode;

int sz(pnode no) { return no ? no->size : 0; }
void reset(pnode no) { if(no) no->sum = no->val; }

void upd_sz(pnode no) {
	if(no) no->size = sz(no->L) + sz(no->R) + 1;
}

void combine(pnode &no, pnode L, pnode R) {
	if(!L || !R) return void(no = L ? L : R);
	no->sum = L->sum + R->sum;
}

void operation(pnode no) {
	if(!no) return;
	reset(no);
	combine(no, no->L, no);
	combine(no, no, no->R);
}

void propagate(pnode no) {
	if(!no || !no->rev) return;
	no->rev = false;
	swap(no->L, no->R);
	if(no->L) no->L->rev ^= true;
	if(no->R) no->R->rev ^= true;
}

void split(pnode no, pnode &L, pnode &R, int pos, int add = 0) {
	if(!no) return void(L = R = NULL);
	propagate(no);
	int curr = add + sz(no->L);
	if(curr <= pos)
		split(no->R, no->R, R, pos, curr+1), L = no;
	else
		split(no->L, L, no->L, pos, add), R = no;
	upd_sz(no); operation(no);
}

void merge(pnode &no, pnode L, pnode R) {
	propagate(L); propagate(R);
	if(!L || !R) no = L ? L : R;
	else if(L->prior > R->prior)
		merge(L->R, L->R, R), no = L;
	else
		merge(R->L, L, R->L), no = R;
	upd_sz(no); operation(no);
}

pnode init(int val) {
	pnode no = new node;
	no->sum = no->val = (val&1);
	no->L = no->R = NULL;
	no->prior = rand();
	no->size = 1;
	no->rev = 0;
	return no;;
}

int query(pnode no, int l, int r) {
	pnode L, mid, R;
	split(no, L, mid, l-1);
	split(mid, no, R, r-l);
	int ans = no->sum;
	merge(mid, L, no);
	merge(no, mid, R);
	return ans;
}

void reverse(pnode no, int l, int r) {
	pnode L, mid, R;
	split(no, L, mid, l-1);
	split(mid, mid, R, r-l);
	mid->rev ^= true;
	merge(no, L, mid);
	merge(no, no, R);
}

int main(int argc, char ** argv) {
	int N, Q, val, a, b;
	while(scanf("%d%d", &N, &Q) != EOF) {
		pnode no, T1, T2, T3;
		no = T1 = T2 = T3 = NULL;
		no = new node();
		rep(i, 0, N) {
			scanf("%d", &val);
			split(no, T1, T2, i);
			merge(T1, T1, init(val));
			merge(no, T1, T2);
		}
		char op;
		while(Q--) {
			scanf(" %c %d%d", &op, &a, &b);
			if(op == 'S') {
				split(no, T1, T2, a);
				split(T1, T1, T3, a-1);
				merge(T1, T1, init(b));
				merge(no, T1, T2);
			}
			else if(op == 'E') printf("%d\n", b-a+1-query(no, a, b));
			else if(op == 'O') printf("%d\n", query(no, a, b));
			else reverse(no, a, b);
		}
	}
	return 0;
}
