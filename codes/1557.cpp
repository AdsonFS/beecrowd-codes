#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int n;
	int i, j;
	int matriz[100][100];
	int espaco;

	cin >> n;
	while(n != 0)
	{
		matriz[0][0] = 1;
		for(j = 1; j < n; j++)
			matriz[0][j] = matriz[0][j - 1] * 2;

		for(i = 1; i < n; i++)
			for(j = 0; j < n; j++)
			{
				matriz[i][j] = matriz[i - 1][j + 1];
				if(j == n - 1)
					matriz[i][j] = matriz[i][j - 1] * 2;
			}

		espaco = log10(matriz[n-1][n-1])+1;;
		
		for(i = 0; i < n; i++)
			for(j = 0; j < n; j++)
			{
				if(j != n-1) cout << setw(espaco) << matriz[i][j] << " ";
				else cout << setw(espaco) << matriz[i][j] << "\n";
			}
		cout << endl;
		cin >> n;
	}

	return 0;
}
