#include <bits/stdc++.h>
using namespace std;

#define all(S) (S).begin(), (S).end()
#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define S second
#define F first
#define MAX 22

typedef long long ll;
typedef pair<int, int> ii;
typedef pair<int, ii> pii;

int main(int argc, char** argv)
{
	int x1, x2, x3;
	while(scanf("%d%d%d", &x1, &x2, &x3) && (x1+x2+x3) != 0)
	{
		int x = x1 * x2 * x3;
		x = cbrt(x);
		if(pow(x, 3) > x1 * x2 * x3)
			x--;
		printf("%d\n", x);
	}
	
	return 0;
}
