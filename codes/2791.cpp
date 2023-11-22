#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int x, n;
	for(int i = 1; i <= 4; i++)
	{
		scanf("%d", &x);
		if(x == 1)
			n = i;
	}
	printf("%d\n", n);
	return 0;
}