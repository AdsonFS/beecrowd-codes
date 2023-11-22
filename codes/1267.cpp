#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, d;
	int vet[501][101];
	while(cin >> n >> d && (n+d) != 0)
	{
		for(int i = 0; i < d; i++)
		{
			for(int j = 0; j < n; j++)
				cin >> vet[i][j];
		}
		bool ok = false;
		bool um = true;
		int i, j;
		for( i = 0; i < n; i++) // ate 7
		{
			um = true;
			for(j = 0; j < d; j++) // ate 2
			{
				if(vet[j][i] == 0)
				{
					um = false;
					break;
				}
			}
			if(um)
			{
				ok = true;
				break;
			}
		}
		if(ok)
			cout << "yes\n";
		else
			cout << "no\n";
	}
	
	return 0;
}