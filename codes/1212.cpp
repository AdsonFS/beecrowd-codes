#include <iostream>
#include <cstring>
using namespace std;

void carry(char x1[], char x2[], int &cont, int p1, int p2, int maior, int c)
{
	int s1 = (x1[p1] - '0');
	int s2 = (x2[p2] - '0');
	if(s1+s2+c > 9)
	{
		cont++;
		if(maior == 1 && p2 == 0)
		{
			int s3 = (x1[p1-1] - '0');
			if(s3 == 9)
				cont++;
		}
		else if(maior == 2 && p1 == 0)
		{
			int s3 = (x2[p2-1] - '0');
			if(s3 == 9)
				cont++;
		}
		c = 1;
	}
	else
		c = 0;
	
	if(p1 > 0 && p2 > 0)
		carry(x1, x2, cont, p1 - 1, p2 - 1, maior, c);
}

int main(int argc, char *argv[])
{
	char x1[10];
	char x2[10];
	
	while(cin >> x1 >> x2)
	{
		if(x1[0] == '0' && x2[0] == '0')
			break;
		int cont = 0;
		int tam1 = strlen(x1);
		int tam2 = strlen(x2);
		int tam_max = tam2;
		int maior = 0;
		if(tam1 > tam2)
			maior = 1;
		else if(tam1 < tam2)
		{
			tam_max = tam1;
			maior = 2;
		}
		
		carry(x1, x2, cont, tam1 - 1, tam2 - 1, maior, 0);
		if(cont == 0)
			cout << "No carry operation.\n";
		else if(cont == 1)
			cout << cont << " carry operation.\n";
		else
			cout << cont << " carry operations.\n";
	}
	
	return 0;
}