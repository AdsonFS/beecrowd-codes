#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 5010
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;
string x1, x2;
int t1, t2;
int pd[MAX][MAX];

int solve(int i, int j)
{
	if(i == t1 || j == t2) return 0;
	if(pd[i][j] != -1) return pd[i][j];
	if(x1[i] == x2[j])
		return pd[i][j] = solve(i + 1, j + 1) + 1;
	return pd[i][j] = max(solve(i + 1, j), solve(i, j + 1));
}

int main(int argc, char * * argv) {
	cin >> x1 >> x2;
	t1 = x1.size();
	t2 = x2.size();
	memset(pd, -1, sizeof(pd));
	printf("%d\n", solve(0, 0));
	return 0;
}
