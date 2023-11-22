#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char vet[110];
	cin >> vet;
	int tam = strlen(vet);
	int c = 0;
	for(int i = 0; i < tam; i++)
	{
		if(vet[i] == '1')
			c++;
	}
	if(c%2 == 0)
		cout << vet << "0\n";
	else
		cout << vet << "1\n";
	
	return 0;
}