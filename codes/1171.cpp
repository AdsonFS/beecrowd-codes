#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, aux;
	int cont = 1;
	cin >> n;
	int vet[n];
	
	for(int i = 0; i < n; i++)
	{
		cin >> vet[i];
	}
	for(int i = n; i >= 0 ; i--)
	{
		for(int j = 1; j < i; j++)
		{
			if(vet[j - 1] > vet[j])
			{
				aux = vet[j - 1];
				vet[j - 1] = vet[j];
				vet[j] = aux;
			}
		}
	}
	for(int i = 0; i < n; i++)
	{
		if(vet[i] == vet[i+1] )
		{
			cont++;
		}
		else
		{
			cout << vet[i] << " aparece " << cont << " vez(es)\n";
			cont = 1;
		}
	}

	return 0;
}