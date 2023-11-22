#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char vet1[1001], vet2[1001];

	while(!cin.getline(vet1, 1001).eof() && !cin.getline(vet2, 1001).eof())
	{
		int tam1 = strlen(vet2);
		int tam2 = strlen(vet1);
		int cont = 0;
		for(int i = 0; i < tam1; i++)
		{
			for(int j = 0; j < tam2; j++)
			{
				if(vet2[i] == vet1[j])
				{
					cont++;
					break;
				}
			}
		}
		cout << cont << endl;
	}
	
	return 0;
}
