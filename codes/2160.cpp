#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char vet[510];
	cin.getline(vet, 510);
	if(strlen(vet) <= 80)
		cout << "YES\n";
	else
		cout << "NO\n";
	
	return 0;
}