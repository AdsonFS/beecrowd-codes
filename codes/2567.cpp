#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1002
#define S second
#define F first
#define rep(i,a,b) for(int i = int (a); i < int (b); i++)

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv) {
	int n, x, i, j;
	while(scanf("%d", &n) != EOF) {
		int sum = 0;
		vector<int> num;
		for(i = 0; i < n; i++) {
			scanf("%d", &x);
			num.pb(x);
		}
		sort(all(num));
		i = 0; j = n - 1;
		while(j > i)
			sum += abs(num[i++] - num[j--]);
		printf("%d\n", sum);
	}
	return 0;
}
