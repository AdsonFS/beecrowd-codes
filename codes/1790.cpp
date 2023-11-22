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
const int MAX = 55;
vector<int> adj[MAX];
int s[MAX], low[MAX];
int cnt, ans;

void dfs(int u, int p) {
	int children = 0;
    s[u] = low[u] = ++cnt;
	rep(i, 0, adj[u].size()) {
        int v = adj[u][i];
        if(!s[v]) {
            dfs(v, u);
            children++;
            low[u] = min(low[u], low[v]);
        }
        else if(v != p)
            low[u] = min(low[u], s[v]);
    }
    if(u == p && children >= 2) ans++;
	else if(u != p) ans += (low[u] == s[u]);
}

int main(int argc, char ** argv) {
    int N, M, u, v;
    while(scanf("%d%d", &N, &M) != EOF) {
        rep(i, 0, M) {
            scanf("%d%d", &u, &v);  
            adj[u].pb(v); adj[v].pb(u);
        }
        dfs(1, 1);
        printf("%d\n", ans);
        REP(i, 1, N) adj[i].clear();
        REP(i, 1, N) s[i] = low[i] = 0;
        cnt = ans = 0;
    }
    return 0;
}
