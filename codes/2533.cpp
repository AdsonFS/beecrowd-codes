#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(4);
	int n, m, c;

	while(cin >> n)
	{
		int soma = 0;
		int div = 0;

		for(int i = 0; i < n; i++)
		{
			cin >> m >> c;
			soma += m * c;
			div += c * 100;
		}
		cout << (double)soma / div << endl;
	}
	return 0;
}
