#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int n, c = 1;

	while(cin >> n)
	{
		int soma = 1;
		for(int i = 1; i <= n; i++)
		{
			soma += i;
		}
		if(n == 0)
		{
			cout << "Caso " << c << ": " << soma << " numero\n0\n\n";
		}
		else
		{

			cout << "Caso " << c << ": " << soma << " numeros\n0 ";

			for(int i = 1; i <= n; i++)
			{
				for(int j = 0; j < i; j++)
				{
					if(i == n && j == i - 1)
						cout << i << endl;
					else
						cout << i << " ";
				}
			}
			cout << endl;
		}

		c++;
	}

	return 0;
}
