#include <iostream>
#include <cstring>
#include <list>
using namespace std;

int main(int argc, char *argv[])
{
	char vet[10][101];
	char aju[101];
	int cont = 0;
	while(true)
	{
		cin.getline(aju, 101);
		if(strcmp(aju, "0") == 0)
			break;
		strcpy(vet[cont], aju);
		cont++;
	}
	char mp[101], aux[101];
	int maior = 0;
	for(int i = 0; i < cont; i++)
	{
		list<int> num;
		int tam = strlen(vet[i]) - 1;
		int j = 0;
		while(vet[i][0] != '\0')
		{
			if(vet[i][tam] != ' ')
			{
				aux[j] = vet[i][tam];
				j++;
			}
			else
			{
				num.push_front(j);
				aux[j] = '\0';
				if(j >= maior)
				{
					maior = j;
					strcpy(mp, aux);
				}
				j = 0;
			}
			vet[i][tam--] = '\0';
		}
		aux[j] = '\0';
		if(j >= maior)
		{
			maior = j;
			strcpy(mp, aux);
		}
		num.push_front(j);
		list<int>::iterator it = num.begin();
		for(int k = 0; k < num.size() - 1; it++, k++)
		{
			cout << *it << "-";
		}
		cout << *it << endl;
		num.clear();
	}
	cout << "\nThe biggest word: ";
	int x1 = strlen(mp) - 1;
	for(int i = x1; i >= 0; i--)
	{
		cout << mp[i];
	}
	cout << endl;
	return 0;
}
