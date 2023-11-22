#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char vet1[1001];
	char vet2[1001];
	int n;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> vet1 >> vet2;
		int tam1 = strlen(vet1);
		int tam2 = strlen(vet2);
		int cont = 0;
		bool ok = true;
		if(tam1 >= tam2)
		{
			for(int i = tam1 - tam2; i < tam1; i++)
			{
				if(vet1[i] != vet2[cont++])
					ok = false;
			}
		}
		else
			ok = false;
		if(ok)
			cout << "encaixa\n";
		else
			cout << "nao encaixa\n";
	}

	return 0;
}
