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
typedef unsigned long long int ull;
int vet[MAX];
int n;

int main(int argc, char** argv) {
	scanf("%d", &n);
	rep(i, 0, n) scanf("%d", &vet[i]);
	int ans = 1;
	int i = 2;
	while(i < n) {
		if(vet[i] - vet[i-1] != vet[i-1] - vet[i-2]) {
			ans++;
			i += 2;
			continue;
		}
		i++;
	}
	printf("%d\n", ans);
	return 0;
}
