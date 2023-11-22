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
#define MAX 10000
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef pair<string, int> psi;
typedef unsigned long long int ull;
vector<int> adj[MAX];
char vet[110][110];
int col[110][110];
int lin[110][110];
int match[MAX];
int vis[MAX];
int n, c, l;

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

void zerar();
void setar();
void printar() {
	printf("LINHA\n");
	rep(i, 0, n) {
		rep(j, 0, n)
			printf("%d ", lin[i][j]);
		printf("\n");
	}
	printf("\nCOLUNA\n");
	rep(i, 0, n) {
		rep(j, 0, n)
			printf("%d ", col[i][j]);
		printf("\n");
	}
}

int main(int argc, char** argv) {
	while(scanf("%d", &n) != EOF) {
		memset(vis, false, sizeof(vis));
		memset(match, -1, sizeof(match));
		rep(i, 0, n) rep(j, 0, n) cin >> vet[i][j];
		zerar(); setar();
		int mcbm = 0;
		rep(i, 0, c+1) {
			REP(j, 0, c) vis[j] = false;
			mcbm += aug(i);
		}
		printf("%d\n", mcbm);
		REP(i, 0, c) adj[i].clear();
		// printar();
	}
	return 0;
}

void setar() {
	rep(i, 0, n) {
		rep(j, 0, n) {
			if(vet[i][j] == '.')
				adj[lin[i][j]].pb(col[i][j]);
		}
	}
}

void zerar() {
	c = 0;
	bool ok = true;
	rep(i, 0, n) {
		rep(j, 0, n) {
			if(vet[i][j] == '.' && !ok) {
				lin[i][j] = ++c;
				ok = true;
			}
			else if(vet[i][j] == '.')
				lin[i][j] = c;
			else
				ok = false;
		}
		ok = false;
	}
	l = c + 3;
	ok = true;
	rep(j, 0, n) {
		rep(i, 0, n) {
			if(vet[i][j] == '.' && !ok) {
				col[i][j] = ++l;
				ok = true;
			}
			else if(vet[i][j] == '.')
				col[i][j] = l;
			else
				ok = false;
		}
		ok = false;
	}
}

