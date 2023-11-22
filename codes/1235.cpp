#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	char vet[101];
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++)
	{
		cin.getline(vet, 101);
		int tam = strlen(vet);
		
			for(int i = tam/2 - 1; i >= 0; i--)
				cout << vet[i];
			
			for(int i = tam - 1; i >= tam/2; i--)
				cout << vet[i];
		cout << endl;
	}
	
	return 0;
}