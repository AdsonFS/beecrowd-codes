#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define MAX 1000000008
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
unsigned long long int pd[] = {1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1024, 2048, 4096, 8192, 16384, 32768, 65536, 131072, 262144, 524288, 1048576, 2097152, 4194304, 8388608, 16777216, 33554432, 67108864, 134217728, 268435456, 536870912, 1073741824};

int main(int argc, char * * argv) {
	unsigned long long int m, x1, x2, x3;
	int n;
	while(scanf("%d", & n) && n != 0) {
		int u = 0, r = 0, j = 0;
		while(n--) {
			scanf("%lld%lld%lld", & x1, & x2, & x3);
			// cin >> x1 >> x2 >> x3;
			m = max(x1, max(x2, x3));
			for(int i = 0; i < 31; i++) {
				if(x1 == pd[i]) {
					u++;
					if(x1 == m) u++;
				}
				if(x2 == pd[i]) {
					r++;
					if(x2 == m) r++;
				}
				if(x3 == pd[i]) {
					j++;
					if(x3 == m) j++;
				}
				if(pd[i] >= m)
					break;
			}
		}
		// cout << u << " " << r << " " << j << endl;
		if(u > r && u > j)
			printf("Uilton\n");
		else if(r > u && r > j)
			printf("Rita\n");
		else if(j > u && j > r)
			printf("Ingred\n");
		else
			printf("URI\n");
	}
	return 0;
}
