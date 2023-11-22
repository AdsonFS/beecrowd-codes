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
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
bool vet[MAX][MAX];

int main(int argc, char** argv) {
	int n, x0, x1, y0, y1, ans;
	ans = 0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d%d%d%d", &x0, &x1, &y0, &y1);
		REP(i, y0+1, y1-0)
			REP(j, x0+1, x1-0) {
				if(!vet[i][j]) ans++;
				vet[i][j] = true;
			}
	}
	printf("%d\n", ans);
	return 0;
}
