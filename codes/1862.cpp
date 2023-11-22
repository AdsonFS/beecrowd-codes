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
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef pair<double, int> di;
typedef unsigned long long int ull;
vector<int> adj[MAX];
char vet[MAX][MAX];
int p[MAX], v[MAX];
int q[MAX];

int find(int a) {
	if(p[a] == a) return a;
	return p[a] = find(p[a]);
}

int main(int argc, char** argv) {
	int n;
	bool ok = true;
	set<int> list;
	vector<int> num;
	set<int> :: iterator it;
	scanf("%d", &n);
	rep(i, 0, n)
		rep(j, 0, n)
			cin >> vet[i][j];
	rep(i, 0, 1005) {
		p[i] = i;
		v[i] = 1;
	}
	rep(i, 0, n) {
		rep(j, 0, n) {
			if(vet[i][j] != 'S') continue;
			q[i]++;
			adj[i].pb(j);
			adj[j].pb(i);
			int a = find(i);
			int b = find(j);
			if(a != b) {
				p[a] = b;
				int V = v[a] + v[b];
				v[a] = v[b] = V;
			}
		}
	}
	rep(i, 0, n) {
		int a = find(i);
		if(q[i] != v[a]) {
			printf("-1\n");
			ok = false;
		}
		if(!ok) break;
	}
	if(ok) {
		rep(i, 0, n)
			list.insert(find(i));
		int tam = list.size();
		printf("%d\n", tam);
		for(it = list.begin(); it != list.end(); it++)
			num.pb(v[*it]);
		sort(all(num), greater<int>());
		printf("%d", num[0]);
		rep(i, 1, tam)
			printf(" %d", num[i]);
		printf("\n");
	}
	return 0;
}

