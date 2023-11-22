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
int Q, N, u, v;
int p[MAX], a[MAX];
int b[MAX][110];
int g[MAX];

int find(int a) {
	if(p[a] == a) return a;
	return p[a] = find(p[a]);
}

void update(int i, int gg, int v) {
	for(; i <= 102; i += i&-i)
		b[gg][i] += v;
}

int query(int i, int gg) {
	int sum = 0;
	for(; i; i -= i&-i)
		sum += b[gg][i];
	return sum;
}

int main(int argc, char ** argv) {
	scanf("%d", &N);
	REP(i, 1, N) p[i] = i;
	REP(i, 1, N) scanf("%d", &a[i]);
	scanf("%d", &Q);
	rep(q, 0, Q) {
		scanf("%d%d", &u, &v);
		int a = find(u);
		int b = find(v);
		p[a] = b;
	}
	int op, cnt = 1;
	REP(i, 1, N) {
		int a = find(i);
		if(!g[a]) g[a] = cnt++;
	}
	REP(i, 1, N) update(a[i], g[find(i)], 1);
	scanf("%d", &Q);
	rep(q, 0, Q) {
		scanf("%d%d", &op, &u);
		if(op == 1) printf("%d\n", query(a[u]-1, g[find(u)]));
		else {
			scanf("%d", &v);
			update(a[u], g[find(u)], -1);
			update(v, g[find(u)], 1);
			a[u] = v;
		}
	}
	return 0;
}
