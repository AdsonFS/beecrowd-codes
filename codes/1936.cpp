#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define PI 3.1415926535897
#define INF 0x3f3f3f3f
#define mod 1000000007
#define pb push_back
#define mk make_pair
#define MAX 100000
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int pd[MAX][10];
int fato[10];
int m;

int fat(int n) {
	if(n == 1) return fato[n] = 1;
	if(fato[n] != 0) return fato[n];
	return fato[n] = n * fat(n-1);
}

int solve(int n, int i) {
	if(n == m) return 0;
	if(fato[i] > m) return INF;
	if(pd[n][i] != 0) return pd[n][i];
	int nao_pega = solve(n, i+1);
	if(n + fato[i] <= m)
		return pd[n][i] = min(nao_pega, solve(n + fato[i], i) + 1);
	return pd[n][i] = nao_pega;
}

int main(int argc, char** argv){
	m = fat(9);
	scanf("%d", &m);
	printf("%d\n", solve(0, 1));
	return 0;
}
