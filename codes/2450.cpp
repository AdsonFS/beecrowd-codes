#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int vet[501][501];
	int m, n, x, t;
	cin >> m >> n;
	t = 0;
	bool ok = true;
	for(int j = 0; j < m; j++)
	{
		for(int i = 0; i < n; i++)
		{
			cin >> vet[j][i];
		}
	}
	for(int j = 0; j < m; j++)
	{
		for(int i = 0; i < n; i++)
		{	
			if(vet[j][i] != 0)
			{
				t = i+1;
				i = n;
			}
			else if(vet[j][i] == 0)
			{
				t = i+1;
			}
		}
		for(int x1 = j+1; x1 < m; x1++)
		{
			for(int i = 0; i < t; i++)
			{
				if(vet[x1][i] != 0)
				{
					ok = false;
					j = m;
				}
			}
		}
	}
	if(ok)
		cout << "S" << endl;
	else
		cout << "N" << endl;
	
	return 0;
}