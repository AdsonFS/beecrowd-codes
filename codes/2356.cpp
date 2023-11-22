#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char dna1[101], dna2[101];
	
	while(cin >> dna1 >> dna2)
	{
		if(strstr(dna1, dna2))
			cout << "Resistente\n";
		else
			cout << "Nao resistente\n";
	}

	return 0;
}
