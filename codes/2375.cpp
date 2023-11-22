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
	int n, x1, x2, x3;
	scanf("%d%d%d%d", &n, &x1, &x2, &x3);
	if(x1 >= n && x2 >= n && x3 >= n)
		printf("S\n");
	else
		printf("N\n");
	return 0;
}