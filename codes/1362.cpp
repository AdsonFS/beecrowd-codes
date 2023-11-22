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
#define MAX 200
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef pair<string, int> psi;
typedef unsigned long long int ull;
string mapa[] = {"XXL", "XL", "L", "M", "S", "XS"};
vector<int> adj[40];
int match[MAX];
int vis[MAX];
int n, m, X;

int find(string str) {
	rep(i, 0, 6)
		if(mapa[i] == str) return i + 40;
	return 1;
}

int aug(int v) {
	if(vis[v]) return 0;
	vis[v] = true;
	int tam = adj[v].size();
	rep(i, 0, tam) {
		int r = adj[v][i];
		if(match[r] == -1 || aug(match[r])) {
			match[r] = v;
			return 1;
		}
	}
	return 0;
}

int main(int argc, char** argv) {
	int t, p;
	scanf("%d", &t);
	while(t--) {
		memset(vis, false, sizeof(vis));
		memset(match, -1, sizeof(match));
		scanf("%d%d", &n, &m);
		string x1, x2;
		X = n / 6;
		int mcbm = 0;
		rep(i, 0, m) {
			cin >> x1 >> x2;
			p = find(x1);
			rep(j, 0, X) {
				adj[i].pb(p);
				p += 6;
			}
			p = find(x2);
			rep(j, 0, X) {
				adj[i].pb(p);
				p += 6;
			}
		}
		rep(i, 0, m) {
			REP(j, 0, m) vis[j] = false;
			mcbm += aug(i);
		}
		printf("%s\n", mcbm == m ? "YES" : "NO");
		REP(i, 0, m) adj[i].clear();
	}
	return 0;
}





