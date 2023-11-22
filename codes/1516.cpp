#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, m, a, b;
	char mat[51][51];

	while(cin >> n >> m && (n + m) != 0)
	{
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
				cin >> mat[i][j];
		}
		cin >> a >> b;
		int dif_a = a / n;
		int dif_b = b / m;
		for(int i = 0; i < n; i++)
		{
			for(int p = 0; p < dif_a; p++)
			{
				for(int j = 0; j < m; j++)
				{
					for(int k = 0; k < dif_b; k++)
					{
						cout << mat[i][j];
					}
				}
				cout << endl;
			}
		}
		cout << endl;
	}
	
	return 0;
}
