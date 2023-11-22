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
	int sum = 0;
	bool ok = true;
	int n, c, x1, x2;
	scanf("%d%d", &n, &c);
	for(int i = 0; i < n; i++)
	{
		scanf("%d%d", &x1, &x2);
		sum -= x1;
		if(sum < 0)
			sum = 0;
		sum += x2;
		if(sum > c)
			ok = false;
	}
	if(ok)
		printf("N\n");
	else
		printf("S\n");
	
	return 0;
}