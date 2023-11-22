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
	int t, n, m, x, y;
	while(scanf("%d", &t) && t != 0) {
		scanf("%d%d", &n, &m);
		for(int i = 0; i < t; i++) {
			scanf("%d%d", &x, &y);
			if(x == n || y == m)
				printf("divisa\n");
			else if(x > n && y > m)
				printf("NE\n");
			else if(x < n && y > m)
				printf("NO\n");
			else if(x > n && y < m)
				printf("SE\n");
			else if(x < n && y < m)
				printf("SO\n");
		}
	}
	return 0;
}
