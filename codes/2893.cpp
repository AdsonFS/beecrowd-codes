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
#define mod 1000007
#define MAX 200010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef pair<string, int> psi;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	int n, m;
	scanf("%d", &n);
	while(scanf("%d%d", &n, &m) != EOF) {
		int aux = 0;
		bool ok = true;
		queue<int> q;
		REP(i, 1, n) {
			aux += i-1;
			q.push(i-1);
			if(i == m) {
				printf("%d\n", i-1);
				ok = false;
				break;
			}
		}
		if(!ok) continue;
		rep(i, n+1, m) {
			q.push(aux);
			aux = (aux + aux) % mod;
			aux = ((aux - q.front()) + mod) % mod;
			q.pop();
			// aux += i-1;
		}
		printf("%d\n", aux);
	}
	return 0;
}
