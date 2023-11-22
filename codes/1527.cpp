#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
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
int p[MAX], w[MAX];
int n, m;

int find(int a) {
	if(p[a] == a) return a;
	return p[a] = find(p[a]);
}

int main(int argc, char** argv) {
	int q, u, v;
	while(scanf("%d%d", &n, &m) && (n+m)) {
		int ans = 0;
		REP(i, 1, n) {
			scanf("%d", &w[i]);
			p[i] = i;
		}
		while(m--) {
			scanf("%d%d%d", &q, &u, &v);
			if(q == 1) { // unir guildas
				int a = find(u);
				int b = find(v);
				if(a != b) {
					p[a] = b;
					w[a] = w[b] = w[a] + w[b];
				}
			}
			else {
				int r = find(1);
				int a = find(u);
				int b = find(v);
				if(r == a && w[a] > w[b]) ans++;
				else if(r == b && w[a] < w[b]) ans++;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
