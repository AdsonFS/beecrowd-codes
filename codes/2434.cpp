#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int n, t, x;
	int menor = 0x3f3f3f3f;
	scanf("%d%d", &n, &t);
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		t += x;
		if(t < menor)
			menor = t;
	}
	printf("%d\n", menor);
	return 0;
}