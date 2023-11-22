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
char s[100];
int ans;

struct node {
	int v;
	node * adj[26];
	node() { v = 0; rep(i, 0, 26) adj[i] = NULL; }
};

void add(node * no, int h, int sz) {
	if(h == sz) { no->v++; return; }
	if(no->adj[s[h]-'a'] == NULL) 
		no->adj[s[h]-'a'] = new node();
	add(no->adj[s[h]-'a'], h+1, sz);
}

void calc(node * no) {
	rep(i, 0, 26) {
		if(no->adj[i] == NULL) continue;
		calc(no->adj[i]);
		no->v += no->adj[i]->v;
	}
}

void solve(node * no, bool ok) {
	rep(i, 0, 26) {
		if(no->adj[i] == NULL) continue;
		if(!ok || no->v != no->adj[i]->v)
			ans += no->adj[i]->v, solve(no->adj[i], 1);
		else solve(no->adj[i], 1);
	}
}

int main(int argc, char const ** argv) {
	int N;
	while(scanf("%d", &N) != EOF) {
		ans = 0;
		node * no;
		no = new node();
		rep(i, 0, N) scanf("%s", s), add(no, 0, strlen(s));
		calc(no); solve(no, 0); 
		printf("%.2lf\n", (1.0 * ans) / N);
	}
	return 0;
}
