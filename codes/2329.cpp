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
#define MOD 10000LL
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
int vet[MAX];
int n, m;

int search(int ini, int fim) {
	int ans = 0;
	int mid = (ini+fim) / 2;
	if(ini >= fim) return mid;
	rep(i, 0, n) ans += vet[i] / mid;
	if(ans >= m) return search(mid+1, fim);
	return search(ini, mid);
}

int main(int argc, char** argv) {
	while(scanf("%d%d", &m, &n) != EOF) {
		rep(i, 0, n) scanf("%d", &vet[i]);
		int ans = search(1, 10001);
		printf("%d\n", ans-1);
	}
	return 0;
}
