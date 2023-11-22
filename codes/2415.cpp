#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x;
	scanf("%d", &n);
	int maior = -1;
	int cont = 0;
	int atual = 0x3f3f3f3f;
	for(int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if(x == atual)
			cont++;
		else
			cont = 1;
		if(cont > maior)
			maior = cont;
		atual = x;
	}
	printf("%d\n", maior);
	return 0;
}