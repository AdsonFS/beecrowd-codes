#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
#define pb push_back
#define mk make_pair
#define MAXV 10002
#define S second
#define F first

typedef long long ll;
typedef pair<int, int> ii;
int main(int argc, char *argv[])
{
	int n, x;
	int sum = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		sum += x - 1;
	}
	printf("%d\n", sum);
	return 0;
}
