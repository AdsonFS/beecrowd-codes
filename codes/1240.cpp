#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		char x1[15];
		char x2[15];
		char aux[15];
		cin >> x1 >> x2;
		int tam1 = strlen(x1);
		int tam2 = strlen(x2);
		if(tam2 > tam1)
			cout << "nao encaixa\n";
		else
		{
			int dif = tam1-tam2;
			int cont = 0;
			for(int j = dif; j < tam1; j++)
				aux[cont++] = x1[j];
			aux[cont] = '\0';
			if(strstr(aux, x2))
				cout << "encaixa\n";
			else
				cout << "nao encaixa\n";
		}
	}

	return 0;
}
