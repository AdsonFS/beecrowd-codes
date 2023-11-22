#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define MAX 1000000000000000001
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
vector<int> num;
int vet[6][12];
int lin[6];
int sum, k;

void solve(int n, int ret) {
	if(n == 5) {
		num.pb(ret);
		return;
	}
	for(int i = 0; i < lin[n]; i++)
		solve(n+1, ret + vet[n][i]);
}

int main(int argc, char** argv) {
	for(int i = 0; i < 5; i++) {
		scanf("%d", lin + i);
		for(int j = 0; j < lin[i]; j++)
			scanf("%d", &vet[i][j]);
	}
	scanf("%d", &k);
	solve(0, 0);
	sort(all(num), greater<int>());
	for(int i = 0; i < k; i++)
		sum += num[i];
	printf("%d\n", sum);
	return 0;
}
