#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1010
#define S second
#define F first
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int pos[MAX];
int n, c, p;
bool ok, OK;

int main(int argc, char ** argv) {
	while(scanf("%d", &n) && n) {
		OK = true;
		memset(pos, -1, sizeof(pos));
		for (int i = 0; i < n; ++i) {
			ok = false;
			scanf("%d%d", &c, &p);
			if(i + p >= 0 && i + p < n) {
				if(pos[i + p] == -1) {
					pos[i + p] = c;
					ok = true;
				}
			}
			if(!ok) OK = false;
		}
		if(!OK) printf("-1\n");
		else {
			printf("%d", pos[0]);
			for (int i = 1; i < n; ++i)
				printf(" %d", pos[i]);
			printf("\n");
		}
	}
	return 0;
}
