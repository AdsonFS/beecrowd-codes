#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAX 1002
#define S second
#define F first
#define rep(i,a,b) for(int i = int (a); i < int (b); i++)

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

string x1, x2;
int t1, t2;
int dp[MAX][MAX];

int solve(int i, int j) {
	if(j == t2 || i == t1) return 0;
	if(dp[i][j] != -1) return dp[i][j];	
	int ret = 0;
	if(x1[i] == x2[j])
		ret = solve(i + 1, j + 1) + 1;
	else
		ret = max(solve(i + 1, j + 1), max(solve(i + 1, j), solve(i, j + 1)));
	return dp[i][j] = ret;
}

int main(int argc, char** argv) {
	memset(dp, -1, sizeof(dp));
	cin >> x1 >> x2;
	t1 = x1.size();
	t2 = x2.size();
	cout << t1 + t2 - solve(0, 0) << endl;
	return 0;
}
