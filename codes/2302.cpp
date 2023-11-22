#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int dy[] = {0, 0, 0, 1, -1};
int dx[] = {0, 1, -1, 0, 0};
int vy[] = {-1, -1, 0, 1, 1, 1, 0, -1, 0};
int vx[] = {0, 1, 1, 1, 0, -1, -1, -1, 0};

int main(int argc, char * * argv) {
	int ans = 0;
	int n, m, y, x, k, xx, ly, lx;
	scanf("%d%d%d%d%d", &n, &m, &y, &x, &k);
	ly = lx = 0;
	while(k--) {
		scanf("%d", &xx);
		ly = ly + dy[xx];
		lx = lx + dx[xx];
		for(int i = 0; i < 9; i++)
			if(ly + vy[i] == y && lx + vx[i] == x)
				ans++;
	}
	printf("%d\n", ans);
	return 0;
}
