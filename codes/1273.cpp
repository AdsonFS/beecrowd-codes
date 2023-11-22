#include <iostream>
#include <cstring>
using namespace std;

void my_setw(char mat[50][51], int j, int maior)
{
	for(int i = 0; i < maior - strlen(mat[j]); i++)
		cout << " ";
}

int main(int argc, char *argv[])
{
	char mat[50][51];
	int n;
	int x = 0;
	while(cin >> n && n != 0)
	{
		int maior = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> mat[i];
			if(strlen(mat[i]) > maior)
				maior = strlen(mat[i]);
		}
		if(x > 0)
			cout << endl;
		for(int i = 0; i < n; i++)
		{
			my_setw(mat, i, maior);
			cout << mat[i] << endl;
		}
		
		x++;
	}

	return 0;
}
