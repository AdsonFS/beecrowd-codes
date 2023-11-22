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

int main(int argc, char** argv) {
	int t, n, x;
	scanf("%d", &t);
	while(t--) {
		set<int> vet;
		scanf("%d", &n);
		for(int i = 0; i < n; i++) {
			scanf("%d", &x);
			vet.insert(x);
		}
		printf("%d\n", vet.size());
	}
	return 0;
}
