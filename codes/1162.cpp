#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define mk make_pair
int vet[50];
int cont;

void ordenar(int l)
{
	int aux;
	for(int i = 0; i < l; i++)
		for(int j = 1; j < l; j++)
			if(vet[j] < vet[j-1])
			{
				cont++;
				aux = vet[j];
				vet[j] = vet[j-1];
				vet[j-1] = aux;
			}
}

int main(int argc, char *argv[])
{
	int n, l;
	scanf("%d", &n);
	for(int j = 0; j < n; j++)
	{
		scanf("%d", &l);
		for(int i = 0; i < l; i++)
			scanf("%d", vet + i);
		cont = 0;
		ordenar(l);
		printf("Optimal train swapping takes %d swaps.\n", cont);
	}
	
	return 0;
}
