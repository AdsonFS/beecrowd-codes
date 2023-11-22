#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAXV 1000
typedef long long ll;
typedef pair<int, int> ii;

int main(int argc, char *argv[])
{
	int x1, y1, x2, y2;
	scanf("%d%d%d%d", &x1, &y1, &x2, &y2);
	int ans = abs(x2-x1) + abs(y2-y1);
	printf("%d\n", ans);
	return 0;
}
