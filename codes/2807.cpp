#include <bits/stdc++.h>
using namespace std;

int main(int argc, char *argv[])
{
	int vet[50];
	int n;
	vet[0] = vet[1] = 1;
	scanf("%d", &n);
	for(int i = 2; i < n; i++)
		vet[i] = vet[i-1] + vet[i-2];
	printf("%d", vet[n-1]);
	for(int i = n-2; i >= 0 ; i--)
		printf(" %d", vet[i]);
	printf("\n");
	
	return 0;
}