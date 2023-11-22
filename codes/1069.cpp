#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char vet[1001];
	int n;
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++)
	{
		cin.getline(vet, 1001);
		int cont = 0;
		int a = 0, f = 0;
		for(int i = 0; i < strlen(vet); i++)
		{
			if(vet[i] == '<')
				a++;
			else if(vet[i] == '>' && f < a)
			{
				f++;
				cont++;
			}
		}
		cout << cont << endl;
	}
	
	return 0;
}
