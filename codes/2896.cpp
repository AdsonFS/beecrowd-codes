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
#define S second
#define F first
#define MAX 400
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef pair<string, int> psi;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n, m;
	scanf("%d", &n);
	while(scanf("%d%d", &n, &m) != EOF)
		printf("%d\n", (n/m) + (n%m));
	return 0;
}
