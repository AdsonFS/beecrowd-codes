#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	char nome1[16], nome2[16], nome3[16];
	char aux1[16], aux2[16];
	
	cin >> n;
	for(int k = 0; k < n; k++)
	{
		cin >> nome1 >> nome2 >> nome3;
		int tam = strlen(nome3);
		int cont1 = 0, cont2 = 0;
		bool ok = false;
		for(int i = 0; i < tam; i++)
		{
			if(nome3[i] == '_')
			{
				aux1[cont1++] = nome1[i];
				aux2[cont2++] = nome2[i];
			}
		}
		
		if(aux1[0] == aux2[1] || aux1[1] == aux2[0])
			cout << "Y\n";
		else
			cout << "N\n";
	}
	
	return 0;
}