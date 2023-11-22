#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char nome1[101], nome2[101], aux[202];
	int n;
	
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++)
	{
		cin.getline(nome1, 101);
		cin.getline(nome2, 101);
		
		int tam = strlen(nome1);
		int c = 0, um = 0, dois = 0, j;
		for(j = 0; j < tam*2; j++)
		{
			if(c == 0 || c == 1)
			{
				if(um < tam)
				{
					aux[j] = nome1[um];
					um++;
				}
			}
			else
			{
				if(dois < strlen(nome2))
				{
					aux[j] = nome2[dois];
					dois++;
				}
			}
			c++;
			if(c > 3)
				c = 0;
		}
		aux[um+dois] = '\0';
		cout << aux << endl;
	}
	
	return 0;
}