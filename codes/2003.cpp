#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char vet[5];
	
	while(cin >> vet)
	{
		int x = ((vet[0] - '0') * 60) + ((vet[2] - '0') * 10) + (vet[3] - '0');
		x += 60;
		if(x < 60*8)
			cout << "Atraso maximo: 0\n";
		else
			cout << "Atraso maximo: " << x - (60*8) << endl;
	}
	
	return 0;
}
