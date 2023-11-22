#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 10005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;

int main(int argc, char** argv) {
	bool ok = false;
	int x, y, n, t, x1, y1;
	scanf("%d%d%d", &x, &y, &n);
	for(int i = 0; i < n; i++) {
		scanf("%d%d%d", &x1, &y1, &t);
		double dist = hypot((x - x1) * 1.0, y - y1);
		if(dist < t) {
			if(!ok) {
				ok = true;
				printf("%d", i+1);
			}
			else
				printf(" %d", i+1);
		}
	}
	if(!ok) printf("-1");
	printf("\n");
	return 0;
}
