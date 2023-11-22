#include <bits/stdc++.h>
using namespace std;

#define REP(i, a, b) for(int i = (a); i <= (b); i++)
#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout << #x << " = "<< x << endl;
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
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int ing[MAX];

int main(int argc, char** argv) {
	int t, n, m, d, i, b, ind;
	int ans, sum;
	scanf("%d", &t);
	while(t--) {
		scanf("%d%d%d", &d, &i, &b);
		rep(j, 0, i) scanf("%d", &ing[j]);
		ans = -1;
		while(b--) {
			sum = 0;
			scanf("%d", &n);
			while(n--) {
				scanf("%d%d", &ind, &m);
				sum += ing[ind] * m;
			}
			ans = max(ans, d / sum);
		}
		printf("%d\n", ans);
	}
	return 0;
}
