#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char nome[50];
	
	while(cin.getline(nome, 50))
	{
		bool m = false, m1 = false, d = false;
		if(strlen(nome) < 6 || strlen(nome) > 32)
		{
			cout << "Senha invalida.\n";
		}
		else
		{
			for(int i = 0; i < strlen(nome); i++)
			{
				if(isdigit(nome[i]))
					d = true;
				if(islower(nome[i]))
					m = true;
				if(isupper(nome[i]))
					m1 = true;
				
				if(!isalpha(nome[i]) && !isdigit(nome[i]))
				{
					i = strlen(nome);
					d = false;
				}
			}
			if(d && m && m1)
				cout << "Senha valida.\n";
			else
				cout << "Senha invalida.\n";
		}
	}

	return 0;
}
