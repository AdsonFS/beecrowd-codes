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
#define MAX 100010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef pair<double, ii> pdi;
typedef unsigned long long int ull;
int vet[MAX];

int main(int argc, char** argv) {
	int n, m, x;
	scanf("%d", &n);
	while(scanf("%d%d", &n, &m) != EOF) {
		int ans = 1;
		int sum = 0;
		rep(i, 0, n) {
			scanf("%d", &x);
			if(sum + x > m) {
				sum = x;
				ans++;
			}
			else
				sum += x;
		}
		printf("%d\n", ans);
	}
	return 0;
}
