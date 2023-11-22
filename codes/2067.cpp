#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 210
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int V[MAX][MAX], S[MAX][MAX];
int n, m, q, l;

void precal() {
	for(int i = 1; i <= n; i++) {
		for(int j = 1; j <= m; j++) {
			int v = 0;
			if(V[i][j] == 0) v = 1;
			S[i][j] = v + S[i-1][j] + S[i][j-1] - S[i-1][j-1];
		}
	}
}

int query(int a, int b, int y, int x) {
	return S[y][x] + S[a-1][b-1] - (S[y][b-1] + S[a-1][x]);
}

int main(int argc, char * * argv) {
	scanf("%d%d", &n, &m);
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= m; j++)
			scanf("%d", & V[i][j]);
	precal();
	scanf("%d", &q);
	while(q--) {
		scanf("%d", &l);
		bool ok = false;
		for(int i = 1; i <= n - l + 1; i++)
			for(int j = 1; j <= m - l + 1; j++) {
				if(query(i, j, i + l - 1, j + l - 1) == 0) {
					ok = true;
					break;
				}
			}
		if(ok) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}
