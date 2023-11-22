#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x1, x2;
	scanf("%d%d%d", &n, &x1, &x2);
	if(x1+x2 <= n)
		printf("Farei hoje!\n");
	else
		printf("Deixa para amanha!\n");
	return 0;
}
