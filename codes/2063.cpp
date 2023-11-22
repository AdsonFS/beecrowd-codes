#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
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
int vet[MAX];
int sum[MAX];
int cont = 1;

int dfs(int v) {
	if(sum[v] != 0)
		return cont - sum[v];
	sum[v] = cont++;
	return dfs(vet[v]);
}

int main(int argc, char** argv) {
	int n;
	int ans = 1;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
		scanf("%d", &vet[i]);
	for(int i = 1; i <= n; i++) {
		if(sum[i] == 0) {
			int v = dfs(i);
			ans = (ans * v) / __gcd(ans, v);
			// cout << v << "\n";
		}
	}
	printf("%d\n", ans);
	return 0;
}
