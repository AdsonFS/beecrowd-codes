#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x;
	char vet[60];
	cin >> n;
	for(int k = 0; k < n; k++)
	{
		cin >> vet;
		cin >> x;
		int tam = strlen(vet);
		char c, d;
		for(int i = 0; i < tam; i++)
		{
			c = vet[i];
			if((c - x) >= 'A' && (c - x) <= 'Z')
				d = vet[i] - x;
			else
				d = vet[i] + (26 - x);
			cout << d;
		}
		cout << endl;
	}
	
	return 0;
}