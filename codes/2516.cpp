#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
typedef pair<int, int> ii;

int main(int argc, char *argv[])
{
	int d, v1, v2;
	while(scanf("%d%d%d", &d, &v1, &v2) != EOF)
	{
		if(v2 >= v1)
			printf("impossivel\n");
		else
		{
			double res = (double)(1.0 * d/(v1 - v2));
			printf("%.2lf\n", res);
		}
	}
	return 0;
}