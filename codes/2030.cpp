#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = "<< x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
typedef pair<int, pair<ii, int> > ppi;
int t, t1, t2, a, v, r, h;

int main(int argc, char** argv) {
	scanf("%d", &t);
	while(t--) {
		scanf("%d%d%d%d%d", &t1, &t2, &a, &v, &r);
		int V = r < v ? r : v;
		int ans = t1 * V;
		int para = 0;
		r -= v;
		while(r > 0) {
			V = r < v ? r : v;
			if((t1 * V) + a < (t2 * V)) {
				ans += (t1 * V) + a;
				para++;
			}
			else
				ans += (t2 * V);
			r -= v;
		}
		printf("Teste #%d\n", ++h);
		printf("%d %d\n\n", ans, para);
	}
	return 0;
}
