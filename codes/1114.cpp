#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int senha = 2002;
	bool loop = true;
	int tentativa;
	
	while(loop)
	{
		cin >> tentativa;
		if(tentativa != senha)
		{
			cout << "Senha Invalida" << endl;
		}
		
		if(tentativa == senha)
		{
			cout << "Acesso Permitido" << endl;
			loop = false;
		}
	}
	
	
	return 0;
}