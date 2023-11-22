#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char * * argv) {
	int h = 0;
	int t, n, x;
	scanf("%d", &t);
	while(t--){
		vector<int> num;
		scanf("%d", &n);
		for(int i = 0; i < n; i++) {
			scanf("%d", &x);
			num.pb(x);
		}
		sort(all(num));
		printf("Case %d: %d\n", ++h, num[n/2]);
	}
	return 0;
}
