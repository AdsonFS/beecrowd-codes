#include <iostream>
#include <cstring>
using namespace std;

void trocar(unsigned long long int a, char lamp[], int tam)
{
	for(int i = 0; i < tam; i++)
	{
		if(a%2 != 0 && lamp[i] == 'X')
		{
			lamp[i] = 'O';
			a = a/2;
		}
		else if(a%2 != 0 && lamp[i] == 'O')
		{
			lamp[i] = 'X';
			a = a/2 + 1;
		}
		else if(a%2 == 0 && lamp[i] == 'O')
		{
			a = a/2;
		}
		else if(a%2 == 0 && lamp[i] == 'X')
		{
			a = a/2;
		}
	}
}

int main(int argc, char *argv[])
{
	char lamp[61];
	int n;
	unsigned long long int a;
	cin >> n;

	for(int i = 0; i < n; i++)
	{
		cin >> lamp >> a;
		trocar(a, lamp, strlen(lamp));
		cout << lamp << endl;
	}

	return 0;
}
