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
int c[MAX], p[MAX], id[MAX];
vector<int> adj[MAX];
int N, M, Q, a, b, m;
int vis[MAX], P;
char op;

void search(int u) {
	if(vis[u] == P) return;
	vis[u] = P;
	m = min(m, c[id[u]]);
	rep(i, 0, (int)adj[u].size())
		search(adj[u][i]);
}

int main(int argc, char** argv) {
	while(scanf("%d%d%d", &N, &M, &Q) != EOF) {
		REP(i, 1, N) vis[1] = 0, p[i] = i, id[i] = i, scanf("%d", &c[i]);
		rep(k, 0, M) {
			scanf("%d%d", &a, &b);
			adj[b].pb(a);
		}
		rep(k, 0, Q) {
			P++;
			scanf(" %c %d", &op, &a);
			if(op == 'P') {
				a = p[a]; m = 101;
				if(adj[a].empty())
					puts("*");
				else {
					rep(i, 0, (int)adj[a].size()) search(adj[a][i]);
					printf("%d\n", m);
				}
			}
			else {
				scanf("%d", &b);
				id[p[a]] = b; id[p[b]] = a;
				swap(p[a], p[b]);
			}
		}
		REP(i, 0, N) adj[i].clear();
	}
	return 0;
}
