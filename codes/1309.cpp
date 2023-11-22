#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char vet[15];
	int x;
	
	while(cin >> vet >> x)
	{
		cout << "$";
		int tam = strlen(vet);
		
		for(int i = 0; i < tam; i++)
		{
			if((i == (tam - 3) || i == (tam - 6) || i == (tam - 9)) && i > 0)
				cout << ",";
			cout << vet[i];
		}
		if(x >= 10)
			cout << "." << x << endl;
		else
			cout << ".0" << x << endl;
	}
	
	return 0;
}