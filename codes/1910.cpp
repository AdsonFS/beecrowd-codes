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
	return (x >= 1 && x <= 100000);
}

int bfs(int s, int e) {
	queue<ii> q;
	vis[s] = true;
	q.push(mk(s, 0));
	if(s == e) return 0;
	while(!q.empty()) {
		int u = q.front().F;
		int d = q.front().S;
		q.pop();
		int v;
		v = u / 2;
		v = u * 2;
		if(ver(v) && !vis[v]) {
			vis[v] = true;
			q.push(mk(v, d+1));
			if(v == e) return d+1;
		}
		v = u * 3;
		if(ver(v) && !vis[v]) {
			vis[v] = true;
			q.push(mk(v, d+1));
			if(v == e) return d+1;
		}
		v = u + 1;
		if(ver(v) && !vis[v]) {
			vis[v] = true;
			q.push(mk(v, d+1));
			if(v == e) return d+1;
		}
		v = u - 1;
		if(ver(v) && !vis[v]) {
			vis[v] = true;
			q.push(mk(v, d+1));
			if(v == e) return d+1;
		}
		if(u % 2 != 0) continue;
		v = u / 2;
		if(ver(v) && !vis[v]) {
			vis[v] = true;
			q.push(mk(v, d+1));
			if(v == e) return d+1;
		}
	}
	return -1;
}

int main(int argc, char** argv) {
	int o, d, k, x;
	while(scanf("%d%d%d", &o, &d, &k) && (o+d+k)) {
		memset(vis, false, sizeof(vis));
		rep(i, 0, k) {
			scanf("%d", &x);
			vis[x] = true;
		}
		printf("%d\n", bfs(o, d));
	}
	return 0;
}
