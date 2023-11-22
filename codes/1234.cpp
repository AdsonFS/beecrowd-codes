#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	char vet[60];
	char aux[60];
	
	while(!cin.getline(vet, 60).eof())
	{
		bool ok = true;
		int tam = strlen(vet);
		for(int i = 0; i < tam; i++)
		{
			if(vet[i] != ' ')
			{
				if(ok)
				{
					aux[i] = toupper(vet[i]);
					ok = false;
				}
				else
				{
					aux[i] = tolower(vet[i]);
					ok = true;
				}
			}
			else
				aux[i] = vet[i];
		}
		aux[tam] = '\0';
		cout << aux << endl;
	}
	
	return 0;
}
