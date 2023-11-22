#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char x1[51], x2[51];

	while(!cin.getline(x1, 51).eof() && !cin.getline(x2, 51).eof())
	{
		char aux[51];
		int tam2 = strlen(x2);
		int maior = 0, cont = 0;
		int ini = 0, fim = 1, j;
		while(fim <= tam2)
		{
			cont = 0;
			for(j = ini; j < fim; j++)
			{
				aux[cont++] = x2[j];
			}
			aux[cont] = '\0';
			if(strstr(x1, aux))
			{
				fim++;
				if(strlen(aux) > maior)
					maior = strlen(aux);
			}
			else
			{
				ini++;
				fim = ini + 1;
				aux[0] = '\0';
			}
		}
		cout << maior << endl;
	}

	return 0;
}
