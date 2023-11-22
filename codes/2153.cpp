#include <iostream>
#include <cstring>
using namespace std;

void procurar(char orig[], char aux[], char cop[], int lim)
{
	int tam = strlen(orig);
	int cont = 0;
	char aju[31];
	strcpy(aju, orig);
	for(int i = tam - lim; i < tam; i++)
	{
		aju[i] = '\0';
		cop[cont++] = orig[i];
	}
	cop[cont] = '\0';
	if(strstr(aju, cop))
	{
		strcpy(aux, cop);
		procurar(orig, aux, cop, ++lim);
	}
	else
	{
		int tam1 = strlen(aju);
		aju[tam1] = orig[tam1];
		aju[tam + 1] = '\0';
		strcpy(aux, aju);
	}
}

int main(int argc, char *argv[])
{
	char orig[31];
	
	while(cin >> orig)
	{
		char aux[31];
		char cop[31];
		if(strlen(orig) == 1)
			cout << orig[0] << endl;
		else
		{
			procurar(orig, cop, aux, 1);
			cout << cop << endl;
		}
	}
	
	return 0;
}