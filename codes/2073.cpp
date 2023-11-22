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
const int MAX = 1e3+3;
int b[MAX][MAX];

void update(int x, int y, int v) {
	for(; x < MAX; x += x&-x)
		for(int yy = y; yy < MAX; yy += yy&-yy)
			b[x][yy] = max(b[x][yy], v);
}

int query(int x, int y) {
	int ans = 0;
	for(; x; x -= x&-x)
		for(int yy = y; yy; yy -= yy&-yy)
			ans = max(ans, b[x][yy]);
	return ans;
}

int main(int argc, char ** argv) {
	int T, N, x, y;
	scanf("%d", &T);
	rep(t, 0, T) {
		memset(b, 0, sizeof b);
		scanf("%d", &N);
		rep(i, 0, N) {
			scanf("%d%d", &x, &y);
			update(x, y, query(x, y)+1);
		}
		printf("%d\n", query(1001, 1001));
	}
	return 0;
}
