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
	int n;
	scanf("%d", &n);
	if(n >= 86)
		printf("A\n");
	else if(n >= 61)
		printf("B\n");
	else if(n >= 36)
		printf("C\n");
	else if(n >= 1)
		printf("D\n");
	else
		printf("E\n");
	
	
	return 0;
}
