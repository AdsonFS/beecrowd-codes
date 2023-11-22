#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char nome[101];

	while(cin >> nome)
	{
		int tam = strlen(nome);
		int esp = tam;
		while(tam >= 1)
		{
			int esp1 = esp - tam;
			for(int i = 0; i < esp1; i++)
			{
				cout << " ";
			}

			for(int i = 0; i < tam; i++)
			{
				cout << nome[i];
				if(i < (tam - 1))
					cout << " ";
			}
			cout << endl;
			tam--;
		}
		cout << endl;
	}
	return 0;
}
