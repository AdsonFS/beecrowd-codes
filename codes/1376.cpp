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
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
struct v {
	int now, next;
};

int dy[] = {-1, 1, 0, 0};
int dx[] = {0, 0, -1, 1};
int f, n, m, b;
v vet[MAX][MAX];

bool ver(int i, int j) {
	return (i >= 1 && i <= n && j >= 1 && j <= m);
}

void update() {
	REP(i, 1, n)
		REP(j, 1, m)
			vet[i][j].now = vet[i][j].next;
}

void setar() {
	REP(i, 1, n)
		REP(j, 1, m)
			vet[i][j].next = vet[i][j].now;
}

int main(int argc, char** argv) {
	while(scanf("%d%d%d%d", &f, &n, &m, &b) && (f+n+m+b)) {
		REP(i, 1, n)
			REP(j, 1, m)
				scanf("%d", &vet[i][j].now);
		setar();
		// /*
		rep(K, 0, b) {
			REP(i, 1, n) {
				REP(j, 1, m) {
					int d = (vet[i][j].now + 1) % f;
					rep(k, 0, 4) {
						int yy = i + dy[k];
						int xx = j + dx[k];
						if(!ver(yy,xx)) continue;
						if(vet[yy][xx].now == d)
							vet[yy][xx].next = vet[i][j].now;
					}
				}
			}
			update();
		}
		// */
		REP(i, 1, n) {
			REP(j, 1, m) {
				if(j == 1) printf("%d", vet[i][j].now);
				else printf(" %d", vet[i][j].now);
			}
			printf("\n");
		}
	}
	return 0;
}

