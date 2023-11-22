#include <iostream>
#include <cstring>
#include <ctype.h>
using namespace std;

int main(int argc, char *argv[])
{
	char nome[1001];
	string c, c1;
	while(cin.getline(nome, 1001))
	{
		if(nome[0] == '*')
			break;
		
		c = tolower(nome[0]);
		int tam = strlen(nome);
		bool ok = true;
		
		for(int i = 1; i < tam; i++)
		{
			if(nome[i] == ' ')
			{
				c1 = tolower(nome[i+1]);
				if(c1 != c)
				{
					ok = false;
					break;
				}
			}
		}
		if(ok)
			cout << "Y\n";
		else
			cout << "N\n";
	}
	
	return 0;
}