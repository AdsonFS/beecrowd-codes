#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x;
	scanf("%d", &n);
	
	if(n <= 800)
		x = 1;
	else if(n <= 1400)
		x = 2;
	else
		x = 3;
	printf("%d\n", x);
	return 0;
}