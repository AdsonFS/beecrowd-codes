#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char senha[21];
	char aux[20];
	int n;
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		cin >> senha;
		int cont = 0;
		bool ok = true;
		if((senha[0] != 'R' && senha[1] != 'A') || strlen(senha) != 20)
			cout << "INVALID DATA\n";
		else
		{
			bool ini = false;
			for(int j = 2; j < 20; j++)
			{
				if(isdigit(senha[j]) != 1)
				{
					ok = false;
					break;
				}
				if(senha[j] != '0' && !ini)
					ini = true;
				if(ini)
					aux[cont++] = senha[j];
			}
			aux[cont] = '\0';
			if(ok)
				cout << aux << endl;
			else
				cout << "INVALID DATA\n";
		}
	}
	
	return 0;
}