#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int n, m;
	int vet[101][101];
	
	while(cin >> n >> m)
	{
		int x1, y1, x2, y2;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				cin >> vet[i][j];
				if(vet[i][j] == 1)
				{
					x1 = j;
					y1 = i;
				}
				else if(vet[i][j] == 2)
				{
					x2 = j;
					y2 = i;
				}
			}
		}
		cout << fabs(x1-x2) + fabs(y1-y2) << endl;
	}
	
	return 0;
}