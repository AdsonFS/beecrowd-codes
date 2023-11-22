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
const int MAX = 5e2+2;
int b[MAX][MAX];
char op;

void update(int x, int y, int v) {
	for(; x < MAX; x += x&-x)
		for(int yy = y; yy < MAX; yy += yy&-yy)
			b[x][yy] += v;
}

int query(int x, int y) {
	int sum = 0;
	for(; x; x -= x&-x)
		for(int yy = y; yy; yy -= yy&-yy)
			sum += b[x][yy];
	return sum;
}

int main(int argc, char ** argv) {
	int Q, x, y, xx, yy, v;
	scanf("%d", &Q);
	rep(q, 0, Q) {
		scanf(" %c %d%d", &op, &x, &y);
		if(op == 'U') {
			scanf("%d%d%d", &xx, &yy, &v);
			update(x, y, v);
			update(xx+1, yy+1, v);
			update(x, yy+1, -v);
			update(xx+1, y, -v);
		}
		else printf("%d\n", query(x, y));
	}
	return 0;
}
