#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 1005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int pd[30][1 << 20], mat[30][30];
int n, limite;

int solve(int i, int bitmask) {
	if(i >= n || bitmask == limite) return pd[i][bitmask] = 0;
	if(pd[i][bitmask] != -1) return pd[i][bitmask];
	int ret = INF;	
	for(int j = 0; j < n; j++)
		if(!(bitmask & (1 << j)))
			ret = min(ret, solve(i+1, bitmask | (1 << j)) + mat[i][j]);
	return pd[i][bitmask] = ret;
}

int main(int argc, char** argv) {
	while(scanf("%d", &n) && n != 0) {
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++)
				scanf("%d", &mat[i][j]);
			
		for(int i = 0; i < n + 1; i++)
			for(int j = 0; j < (1 << 20); j++)
				pd[i][j] = -1;
		limite = (1 << n) - 1;
		printf("%d\n", solve(0, 0));
	}	
	return 0;
}
