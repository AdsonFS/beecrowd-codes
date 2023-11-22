#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	map<int, int> num;
	int n, t, x;
	scanf("%d%d", &n, &t);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		num[x]++;
	}
	int menor = 0x3f3f3f3f;
	for(int i = 1; i <= t; i++)
	{
		if(num[i] < menor)
			menor = num[i];
	}
	printf("%d\n", menor);
	return 0;
}