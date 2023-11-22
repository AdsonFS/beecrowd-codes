#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char mus[201];
	
	while(cin >> mus)
	{
		if(strcmp(mus, "*") == 0)
			break;
		int cont = 0;
		double c = 0;
		int tam = strlen(mus);
		for(int i = 1; i < tam; i++)
		{
			if(mus[i] == 'W')
				c += 1;
			else if(mus[i] == 'H')
				c += 0.5;
			else if(mus[i] == 'Q')
				c += 0.25;
			else if(mus[i] == 'E')
				c += 1.0/8;
			else if(mus[i] == 'S')
				c += 1.0/16;
			else if(mus[i] == 'T')
				c += 1.0/32;
			else if(mus[i] == 'X')
				c += 1.0/64;
			else if(mus[i] == '/')
			{
				if(c == 1)
					cont++;
				c = 0;
			}
		}
		cout << cont << endl;
	}
	
	return 0;
}
