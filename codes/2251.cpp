#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	int j = 1;
	while(scanf("%d", &n) && n != 0)
	{
		int res = pow(2, n) - 1;
		printf("Teste %d\n%d\n\n", j++, res);
	}
	return 0;
}