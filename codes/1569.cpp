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
#define MAX 1000000
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int player[MAX];
int mapa[110];

int main(int argc, char** argv) {
	int t, n, e, m;
	int u, v, vez;
	scanf("%d", &t);
	while(t--) {
		scanf("%d%d%d", &n, &e, &m);
		bool fim = false;
		REP(i, 0, 110) mapa[i] = i;
		REP(i, 0, n) player[i] = 1;
		rep(i, 0, e) {
			scanf("%d%d", &u, &v);
			mapa[u] = v;
		}
		rep(i, 0, m) {
			scanf("%d", &v);
			if(fim) continue;  
			vez = 1 + (i % n);
			int dest = player[vez] + v;
			if(mapa[dest] >= 100) {
				player[vez] = 100;
					fim = true;
			}
			else
				player[vez] = mapa[dest];
		}
		REP(i, 1, n) printf("Position of player %d is %d.\n", i, player[i]);
	}
	return 0;
}
