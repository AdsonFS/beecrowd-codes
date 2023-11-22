#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n, m;
	int cont = 0;
	while(cin >> n >> m)
	{
		int vet[105][105];
		for(int i = 0; i <= n+1; i++)
		{
			for(int j = 0; j <= m+1; j++)
			{
				if(i == 0 || i == n+1 || j == 0 || j == m+1)
					vet[i][j] = 0;
				else
					cin >> vet[i][j];
				
			}
		}
		
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
			{
				if(vet[i][j] == 1)
					cout << 9;
				else
				{
					cont = 0;
					if(vet[i-1][j] == 1)
						cont++;
					if(vet[i+1][j] == 1)
						cont++;
					if(vet[i][j-1] == 1)
						cont++;
					if(vet[i][j+1] == 1)
						cont++;
					cout << cont;
				}
			}
			cout << endl;
		}
	}
	
	return 0;
}