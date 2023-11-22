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
typedef pair<ii, int> pii;
const int MAX = 1e2+2;
int pd[MAX][MAX];

int solve(int l, int c) {
	if(pd[l][c] != -1) return pd[l][c];
	if(!l || !c || l == c) return 305;
	bitset<310> bit;
	REP(k, 1, min(l, c))
		bit.set(solve(l-k, c-k));
	REP(k, 1, l)
		bit.set(solve(l-k, c));
	REP(k, 1, c)
		bit.set(solve(l, c-k));
	REP(i, 0, 306)
		if(!bit.test(i))
			return pd[l][c] = i;
	return 305;
}

int main(int argc, char ** argv) {
	memset(pd, -1, sizeof pd);
	int ans = 0;
	int N, l, c;
	scanf("%d", &N);
	rep(i, 0, N) {
		scanf("%d%d", &l, &c);
		ans ^= solve(l, c);
	}
	printf("%s\n", ans != 0 ? "Y" : "N");
	return 0;
}
