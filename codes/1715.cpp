#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n1, n2;
	int vet[100][100];
	int j = 0;
	bool gol = true;
	cin >> n1 >> n2;

	for(int i = 0; i < n1; i++)
	{
		for(int j = 0; j < n2; j++)
			cin >> vet[i][j];
	}
	for(int i = 0; i < n1; i++)
	{
		gol = true;
		for(int j = 0; j < n2; j++)
		{
			if(vet[i][j] == 0)
				gol = false;
		}
		if(gol)
			j++;
	}
	cout << j << endl;

	return 0;
}
