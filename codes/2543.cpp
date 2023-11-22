#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, id, i, j;
	
	while(cin >> n >> id)
	{
		int cont = 0;
		for(int k = 0; k < n; k++)
		{
			cin >> i >> j;
			if(i == id && j == 0)
				cont++;
		}
		cout << cont << endl;
	}
	
	return 0;
}