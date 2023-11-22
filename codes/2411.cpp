#include <bits/stdc++.h>
using namespace std;

#define rep(i, a, b) for(int i = (a); i < (b); i++)
#define debug(x) cout<<#x << " = "<<x<<endl;
#define pi 3.14159265358979323846264338
#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 110
typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
typedef unsigned long long int ull;
int dy[] = {-2, -1, 1, 2, 2, 1, -1, -2};
int dx[] = {1, 2, 2, 1, -1, -2, -2, -1};

bool ver(int i, int j) {
	bool ok = true;
	if(i < 0 || i >= 8 || j < 0 || j >= 8) ok = false;
	if((i == 3 && j == 5) || (i == 2 && j == 2)) ok = false;
	if((i == 4 && j == 1) || (i == 4 && j == 2)) ok = false;
	return ok;
}

int main(int argc, char * * argv) {
	int n, y, x, k;
	int ans = 0;
	y = x = 4;
	scanf("%d", &n);
	while(n--) {
		ans++;
		scanf("%d", &k);
		y = y + dy[k-1];
		x = x + dx[k-1];
		if(!ver(y, x)) break;
	}
	printf("%d\n", ans);
	return 0;
}
