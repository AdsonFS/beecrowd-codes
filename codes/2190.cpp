#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define pf push_front
#define mk make_pair
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int n, m, h;
int p[MAX];

int find(int a) {
	if(p[a] == a) return a;
	return p[a] = find(p[a]);
}

int main(int argc, char** argv) {
	int u, v, c;
	while(scanf("%d%d", &n, &m) && n) {
		vector<ii> ans;
		vector<pii> num;
		REP(i, 0, n) p[i] = i;
		rep(i, 0, m) {
			scanf("%d%d%d", &u, &v, &c);
			num.pb(mk(c, mk(u, v)));
		}
		printf("Teste %d\n", ++h);
		sort(all(num));
		rep(i, 0, m) {
			u = num[i].S.F;
			v = num[i].S.S;
			int a = find(u);
			int b = find(v);
			if(a != b) {
				p[a] = b;
				ans.pb(mk(min(u, v), max(u, v)));
				printf("%d %d\n", min(u, v), max(u, v));
			}
		}
		printf("\n");
	}
	
	return 0;
}
