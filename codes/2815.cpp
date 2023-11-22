#include <bits/stdc++.h>
using namespace std;

#define pb push_back

int main(int argc, char *argv[])
{
	char nome[17000];
	cin.getline(nome, 17000);
	int tam = strlen(nome);
	int ini = -1;
	for(int i = 0; i < tam; i++)									// bobobola.
	{
		ini++;
		if((nome[i] == nome[i + 2] && nome[i + 1] == nome[i + 3]) && (nome[i] != nome[i + 4] || nome[i + 1] != nome[i + 5]) && ini == 0)
		{
			printf("%c%c", nome[i], nome[i + 1]);
			i += 3;
		}
		else if(nome[i] != ' ')
			printf("%c", nome[i]);
		else
		{
			printf(" ");
			ini = -1;
		}		
	}
	printf("\n");
	return 0;
}
// 0 1 2 3 4 5
// j u j u c a
