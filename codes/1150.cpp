#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	int n, z;
	int cont = 0;
	cin >> n;
	do
	{
		cin >> z;
	}while(z <= n);
	int soma = 0;
	while(true)
	{
		soma += n++;
		cont++;
		if(soma > z)
			break;
	}
	cout << cont << endl;
	
	return 0;
}
