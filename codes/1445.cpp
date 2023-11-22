#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define PER(i, a, b) for(int i = (a); i >= (b); i--)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << numl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).num()
#define mod 1000000007
#define pf push_front
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first
typedef long long ll;
typedef long double lf;
typedef pair<int, int> ii;
typedef unsigned long long int ull;
int p[MAX], v[MAX];

int find(int a) {
	if(p[a] == a) return a;
	return p[a] = find(p[a]);
}

int main(int argc, char ** argv) {
	char l;
	int N, a, b;
	while(scanf("%d", &N) && N) {
		rep(i, 0, MAX) p[i] = i, v[i] = 1;
		rep(i, 0, N) {
			scanf(" %c %d %c %d %c", &l, &a, &l, &b, &l);
			a = find(a); b = find(b);
			if(a != b) {
				p[a] = b;
				v[a] = v[b] = v[a] + v[b];
			}
		}
		printf("%d\n", v[find(1)]);
	}
	return 0;
}

