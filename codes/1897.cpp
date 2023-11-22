#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define pf push_front
#define mk make_pair
#define MAX 100010
#define S second
#define F first
typedef long long ll;
// typedef pair<int, ii> pii;
typedef unsigned long long int ull;
typedef pair<int, ull> ii;

int bfs(int n, int m) {
	queue<ii> q;
	map<ull, bool> vis;
	vis[n] = true;
	q.push(mk(0, n));
	while(!q.empty()) {
		int u = q.front().S;
		int d = q.front().F;
		if(u == m) return d;
		int v = u * 2;
		if(!vis[v]) {
			vis[v] = true;
			q.push(mk(d+1, v));
		}
		v = u * 3;
		if(!vis[v]) {
			vis[v] = true;
			q.push(mk(d+1, v));
		}
		v = u / 2;
		if(!vis[v]) {
			vis[v] = true;
			q.push(mk(d+1, v));
		}
		v = u / 3;
		if(!vis[v]) {
			vis[v] = true;
			q.push(mk(d+1, v));
		}
		v = u + 7;
		if(!vis[v]) {
			vis[v] = true;
			q.push(mk(d+1, v));
		}
		v = u - 7;
		if(!vis[v]) {
			vis[v] = true;
			q.push(mk(d+1, v));
		}
		q.pop();
	}
	return -1;
}

int main(int argc, char** argv) {
	int n, m;
	scanf("%d%d", &n, &m);
	printf("%d\n", bfs(n, m));
	return 0;
}

