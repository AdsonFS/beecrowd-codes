#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	char vet[1003];
	char aux[1003];
	cin >> n;
	cin.ignore();
	for(int j = 0; j < n; j++)
	{
		cin.getline(vet, 1003);
		int tam = strlen(vet);
		for(int i = 0; i < tam; i++)
		{
			if(isalpha(vet[i]) != 0)
				vet[i] = (vet[i] + 3);
		}
		int cont = 0;
		int mid;
		mid = (tam/2);
		
		for(int i = tam - 1; i >= 0; i--)
			aux[cont++] = vet[i];
		aux[cont] = '\0';
		for(int i = mid; i < tam; i++)
			aux[i] = (aux[i] - 1);
		cout << aux << endl;
	}
	
	return 0;
}