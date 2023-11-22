#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = " << x << endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<ll, ii> PII;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int n;

int main(int argc, char** argv) {
	while(scanf("%d", &n) && n) {
		int ans = 0;
		while(n > 1) {
			int aux = n / 3;
			if(n % 3 != 0) aux++; 
			ans += aux;
			n = aux;
		}
		printf("%d\n", ans);
	}
	return 0;
}
