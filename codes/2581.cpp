#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	char vet[201];
	cin >> n;
	cin.ignore();
	for(int i = 0; i < n; i++)
	{
		cin.getline(vet, 201);
		cout << "I am Toorg!\n";
	}
	
	return 0;
}
