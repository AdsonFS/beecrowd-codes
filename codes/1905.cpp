#include <iostream>
using namespace std;

bool visitado[5][5];
int mat[5][5];
bool ok;

void busca(int i, int j)
{
	if(i == 4 && j == 4)
		ok = true;
	if(!ok)
	{
		visitado[i][j] = true;
		if(i + 1 < 5 && mat[i+1][j] == 0 && !visitado[i+1][j])
			busca(i + 1, j);
		if(i - 1 >= 0 && mat[i-1][j] == 0 && !visitado[i-1][j])
			busca(i - 1, j);
		if(j + 1 < 5 && mat[i][j+1] == 0 && !visitado[i][j+1])
			busca(i, j + 1);
		if(j - 1 >= 0 && mat[i][j-1] == 0 && !visitado[i][j-1])
			busca(i, j - 1);
	}
}

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	for(int k = 0; k < n; k++)
	{
		for(int i = 0; i < 5; i++)
		{
			for(int j = 0; j < 5; j++)
			{
				cin >> mat[i][j];
				visitado[i][j] = false;
			}
		}
		ok = false;
		busca(0, 0);
		if(ok)
			cout << "COPS\n";
		else
			cout << "ROBBERS\n";
	}
	
	return 0;
}