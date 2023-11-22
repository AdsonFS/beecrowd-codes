#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
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

int main(int argc, char ** argv) {
	bool ok;
	char data[20];
	int n, m, x, sum;
	while(scanf("%d%d", &n, &m) != EOF) {
		ok = false;
		rep(i, 0, m) {
			sum = 0;
			scanf(" %s", data);
			rep(j, 0, n) {
				scanf("%d", &x);
				sum += x;
			}
			if(!ok && sum == n) {
				printf("%s\n", data);
				ok = true;
			}
		}
		if(!ok) printf("Pizza antes de FdI\n");
	}
	return 0;
}
