#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x;
	int cont = 2;
	int at;
	int aux;
	cin >> n;
	for(int j = 0; j < n; j++)
	{
		cin >> x;
		aux = 2;
		cont = 2;
		at = 2;
		for(int i = 2; i <= x; i++)
		{
			at = aux + cont++;
			aux = at;
		}
		cout << at << endl;
	}
	
	return 0;
}