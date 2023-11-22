#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char nome[50];
	char a[5] = {'a', 'e', 'i', 'o', 'u'};
	char vogal[50];
	int cont = 0;
	cin >> nome;
	int tam = strlen(nome);
	
	for(int i = 0; i < tam; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			if(nome[i] == a[j])
			{
				vogal[cont] = a[j];
				cont++;
			}
		}
	}
	bool ok = true;
	for(int i = 0; i < cont; i++)
	{
		int x = (cont-1) - i;
		if(vogal[i] != vogal[x])
			ok = false;
	}
	if(ok)
		cout << "S" << endl;
	else
		cout << "N" << endl;
	
	return 0;
}
