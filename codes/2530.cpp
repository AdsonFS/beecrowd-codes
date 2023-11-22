#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define ang 0.707106781
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 100005
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
int r1[MAX], r2[MAX];
int n, m;

bool solve(int i, int j) {
	if(j >= m) return true;
	if(i >= n) return false;
	if(r1[i] == r2[j]) return solve(i+1, j+1);
	return solve(i+1, j);
}

int main(int argc, char** argv) {
	while(scanf("%d%d", &n, &m) != EOF) {
		for(int i = 0; i < n; i++)
			scanf("%d", &r1[i]);
		for(int i = 0; i < m; i++)
			scanf("%d", &r2[i]);
		if(solve(0, 0)) printf("sim\n");
		else printf("nao\n");
	}
	return 0;
}
