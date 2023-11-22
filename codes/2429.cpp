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
#define MAX 10050
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
vector<int> adj1[MAX], adj2[MAX];
bool vis1[MAX];
bool vis2[MAX];
int ans;

void dfs1(int v) {
	ans++;
	vis1[v] = true;
	int tam = adj1[v].size();
	for(int i = 0; i < tam; i++) {
		int u = adj1[v][i];
		if(!vis1[u])
			dfs1(u);
	}
}

void dfs2(int v) {
	ans++;
	vis2[v] = true;
	int tam = adj2[v].size();
	for(int i = 0; i < tam; i++) {
		int u = adj2[v][i];
		if(!vis2[u])
			dfs2(u);
	}
}

int main(int argc, char** argv) {
	int n, v1, v2;
	scanf("%d", &n);
	for(int i = 0; i < n; i++) {
		scanf("%d%d", &v1, &v2);
		adj1[v1].pb(v2);
		adj2[v2].pb(v1);
	}
	dfs1(1); dfs2(1);
	if(ans == 2 * n) printf("S\n");
	else printf("N\n");
	return 0;
}