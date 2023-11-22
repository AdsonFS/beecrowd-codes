#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	char nome[110];
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++)
		cin.getline(nome, 110);
	cout << "Ciencia da Computacao\n";
	
	return 0;
}