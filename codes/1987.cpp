#include <iostream>
#include <cstring>
using namespace std;

int soma(char str[])
{
	int x = 0;
	int tam = strlen(str);
	for(int i = 0; i < tam; i++)
		x += (str[i] - '0');
	return x;
}

int main(int argc, char *argv[])
{
	int n, x;
	char str[20];
	while(cin >> n >> str)
	{
		x = soma(str);
		cout << x << " ";
		if(x%3 == 0)
			cout << "sim\n";
		else
			cout << "nao\n";
	}
	
	return 0;
}
