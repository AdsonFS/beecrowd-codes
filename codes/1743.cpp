#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int vet[2][5];
	for(int i = 0; i < 2; i++)
	{
		for(int j = 0; j < 5; j++)
			cin >> vet[i][j];
	}
	bool ok = true;
	for(int i = 0; i < 5; i++)
	{
		if(vet[0][i] + vet[1][i] != 1)
		{
			ok = false;
			break;
		}
	}
	if(ok)
		cout << "Y\n";
	else
		cout << "N\n";
	
	return 0;
}