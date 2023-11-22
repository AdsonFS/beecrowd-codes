#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int N, M, Q, h;
int p[MAX];

int find(int a) {
	if(p[a] == a) return a;
	return p[a] = find(p[a]);
}

int main(int argc, char** argv) {
	int a, b;
	while(scanf("%d%d%d", &N, &M, &Q) != EOF) {
		REP(i, 0, N) p[i] = i;
		rep(i, 0, M) {
			scanf("%d%d", &a, &b);
			p[find(a)] = find(b);
		}
		if(h++) printf("\n");
		rep(i, 0, Q) {
			scanf("%d%d", &a, &b);
			if(find(a) == find(b)) puts("S");
			else puts("N");
		}
	}
	return 0;
}
