#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
typedef pair<int, int> ii;

int main(int argc, char *argv[])
{
	int v, t;
	while(scanf("%d%d", &v, &t) != EOF)
	{
		if(v == 0 || t == 0)
			printf("0\n");
		else
		{
			double ace = (double)v / t;
			double esp = (ace * pow(2 * t, 2))/2;
			printf("%.0lf\n", esp);
		}
	}
	return 0;
}