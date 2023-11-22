#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
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
typedef pair<double, int> di;
typedef unsigned long long int ull;
typedef pair<pair<char, int>, ii> pci;
bool vis[MAX];

bool ver(int x) {
	return x < MAX;
}

int bfs(int s, int e) {
	queue<ii> q;
	vis[s] = true;
	q.push(mk(s, 0));
	if(s == e) return 0;
	while(!q.empty()) {
		char aux[10];
		char num[10];
		int u = q.front().F;
		int d = q.front().S;
		if(u == e) return d;
		q.pop();
		int v = u + 1;
		if(ver(v) && !vis[v]) {
			vis[v] = true;
			q.push(mk(v, d+1));
		}
		sprintf(aux, "%d", u);
		int tam = strlen(aux) - 1;
		for(int i = tam, j = 0; i >= 0; i--, j++)
			num[j] = aux[i];
		num[tam+1] = '\0';
		v = atoi(num);
		if(ver(v) && !vis[v]) {
			vis[v] = true;
			q.push(mk(v, d+1));
		}
	}
	return -1;
}

int main(int argc, char** argv) {
	int t, n, m;
	scanf("%d", &t);
	while(t--) {
		memset(vis, false, sizeof(vis));
		scanf("%d%d", &n, &m);
		printf("%d\n", bfs(n, m));
	}
	return 0;
}
