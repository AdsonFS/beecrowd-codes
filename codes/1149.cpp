#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	//Imprimir a soma de A para cada i com os valores (0 <= i <= N-1).
	int a, n = 0, soma = 0;
	cin >> a;
	while(n <= 0)
	{
		cin >> n;
	}
	
	for(int i = 0; i < n; i++)
	{
		soma += a+i;
	}
	cout << soma << endl;
	
	return 0;
}