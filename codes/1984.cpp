#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char nome[15];
	cin >> nome;
	int tam = strlen(nome);
	for(int i = tam-1; i >= 0; i--)
	{
		cout << nome[i];
	}
	cout << endl;
	
	return 0;
}