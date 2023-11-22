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
#define MAX 5010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ii, int> pii;
typedef unsigned long long int ull;
int vet[MAX];

int main(int argc, char** argv) {
	int n, ind;
	while(scanf("%d", &n) && n) {
		int ans = 0;
		int aux = 0;
		bool ok = false;
		rep(i, 0, n) {
			scanf("%d", &vet[i]);
			if(vet[i] && !ok) {
				ok = true;
				ind = i;
			}
		}
		int v = n / 2;
		if(!ok && n % 2) printf("%d\n", v+1);
		else if(!ok) printf("%d\n", v);
		if(!ok) continue;
		rep(i, ind+1, INF) {
			int j = i % n;
			if(j == ind) break;
			if(!vet[j]) aux++;
			else aux = 0;
			if(aux == 2) {
				aux = 0;
				ans++;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}
