#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main(int argc, char *argv[])
{
	char vet[60];
	int n;
	
	while(cin >> vet >> n)
	{
		int tam = strlen(vet);
		int cont = 0;
		int aux = 0;
		for(int i = 0; i < tam; i++)
		{
			if(vet[i] == 'R')
			{
				if(aux == 0)
					cont++;
				aux++;
			}
			else
			{
				cont ++;
				aux = 0;
			}
			if(aux == n)
			{
				aux = 0;
			}
		}
		printf("%d\n", cont);
	}
	
	return 0;
}