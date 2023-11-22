#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define minN 500010
#define str second
#define F first
typedef long long ll;
typedef pair<int, int> ii;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(0);
	int n, m;
	scanf("%d%d", &n, &m);
	long double ans = n - m + 1;
	ans = pow(ans, 2) + (m-1);
	cout << ans << "\n";
	return 0;
}
