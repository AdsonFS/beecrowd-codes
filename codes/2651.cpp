#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	char nome[100001];
	char nome1[100001];
	int i;
	cin.getline(nome, 100001);
	int tam = strlen(nome);
	for(i = 0; i < tam; i++)
		nome1[i] = tolower(nome[i]);
	nome1[tam] = '\0'; 
	
	if(strstr(nome1, "zelda"))
		cout << "Link Bolado\n";
	else
		cout << "Link Tranquilo\n";
	
	return 0;
}