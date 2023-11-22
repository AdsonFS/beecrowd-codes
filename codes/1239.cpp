#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char vet[101];
	
	while(!cin.getline(vet, 101).eof())
	{
		bool i = false, b = false;
		int tam = strlen(vet);
		
		for(int j = 0; j < tam; j++)
		{
			if(vet[j] == '_' && !i)
			{
				cout << "<i>";
				i = true;
			}
			else if(vet[j] == '_' && i)
			{
				cout << "</i>";
				i = false;
			}
			else if(vet[j] == '*' && !b)
			{
				cout << "<b>";
				b = true;
			}
			else if(vet[j] == '*' && b)
			{
				cout << "</b>";
				b = false;
			}
			else
				cout << vet[j];
		}
		cout << endl;
	}
	
	return 0;
}