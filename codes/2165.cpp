#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char vet[510];
	cin.getline(vet, 510);
	if(strlen(vet) <= 140)
		cout << "TWEET\n";
	else
		cout << "MUTE\n";
	
	return 0;
}