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
int N, Q, M, a[MAX];
ll tree[4*MAX];

void build(int no, int i, int j) {
    if(i == j) { tree[no] = (1LL << a[i]); return; }
    build(no*2, i, (i+j)/2); 
    build(no*2+1, (i+j)/2+1, j);
    tree[no] = tree[no*2] | tree[no*2+1];
}

void update(int no, int i, int j, int l, int v) {
    if(i > l || j < l) return;
    if(i == j) { tree[no] = (1LL << v); return; }
    update(no*2, i, (i+j)/2, l, v); 
    update(no*2+1, (i+j)/2+1, j, l, v);
    tree[no] = tree[no*2] | tree[no*2+1];
}

ll query(int no, int i, int j, int l, int r) {
    if(i > r || j < l) return 0;
    if(i >= l && j <= r) return tree[no];
    return query(no*2, i, (i+j)/2, l, r) | query(no*2+1, (i+j)/2+1, j, l, r);
}

int main(int argc, char ** argv) {
    int op, u, v;
    scanf("%d%d%d", &N, &Q, &M);
    REP(i, 1, N) scanf("%d", a+i);
    build(1, 1, N);
    rep(q, 0, Q) {
        scanf("%d%d%d", &op, &u, &v);
        if(op == 1)
            printf("%d\n", (int)__builtin_popcountll(query(1, 1, N, u, v)));
        else update(1, 1, N, u, v);
    }
    return 0;
}
