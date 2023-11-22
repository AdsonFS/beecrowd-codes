#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main(int argc, char *argv[])
{
	char vet[52000];
	char c;
	
	while(!cin.getline(vet, 52000).eof())
	{
		int cont = 0;
		int tam = strlen(vet);
		vector<char> num;
		c = tolower(vet[0]);
		num.pb(c);
		for(int i = 1; i < tam; i++)
		{
			if(vet[i-1] == ' ')
			{
				c = tolower(vet[i]);
				num.pb(c);
			}
		}
		tam = num.size();
		for(int i = 1; i < tam; i++)
		{
			if(num[i] == num[i-1] && num[i] != num[i-2])
				cont++;
		}
		printf("%d\n", cont);
	}
	
	return 0;
}