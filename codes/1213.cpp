#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cerr << #x << " = " << x << endl;
#define SET(c, v) memset(c, v, sizeof c)
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define pf push_front
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
int n;

int solve(int m) {
	int aux = 1;
	for(int i = 1; i < INF; i++) {
		aux = aux % m;
		if(!aux) return i;
		aux = aux * 10 + 1;
	}
	return -1;
}

int main(int argc, char** argv) {
	while(scanf("%d", &n) != EOF)
		printf("%d\n", solve(n));
	return 0;
}

