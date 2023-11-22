#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 10010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int vet[MAX];

int main(int argc, char ** argv) {
	int n, sum, ans;
	while(scanf("%d", &n) != EOF) {
		sum = 0;
		for (int i = 0; i < n; ++i) {
			scanf("%d", &vet[i]);
			sum += vet[i];
		}
		if(sum % n == 0) {
			sum = sum / n;
			ans = 0;
			for (int i = 0; i < n; ++i)
				ans += abs(sum - vet[i]);
			ans = (ans / 2) + 1;
			printf("%d\n", ans);
		}
		else printf("-1\n");
	}
	return 0;
}