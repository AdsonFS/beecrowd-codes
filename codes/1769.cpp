#include <iostream>
#include <cstring>
using namespace std;

char cpf[20];

int soma1()
{
	int x = 0;
	int h = 1;
	for(int i = 0; i <= 10; i++)
	{
		if(i != 3 && i != 7)
			x += (cpf[i] - '0') * h++;
	}
	
	return x;
}

int soma2()
{
	int x = 0;
	int h = 9;
	for(int i = 0; i <= 10; i++)
	{
		if(i != 3 && i != 7)
			x += (cpf[i] - '0') * h--;
	}
	
	return x;
}

int main(int argc, char *argv[])
{	
	while(cin >> cpf)
	{
		bool ok1 = false;
		bool ok2 = false;
		int x = soma1();
		int y = soma2();
		int b1 = (cpf[12] - '0');
		int b2 = (cpf[13] - '0');
		if(b1 == x%11 || (x%11 == 10 && b1 == 0))
			ok1 = true;
		if(b2 == y%11 || (y%11 == 10 && b2 == 0))
			ok2 = true;
		if(ok1 && ok2)
			cout << "CPF valido\n";
		else
			cout << "CPF invalido\n";
	}
	
	return 0;
}