#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(1);
	char op;
	double vet[12][12];
	int x1;
	double conta = 0;

	cin >> x1 >> op;
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			cin >> vet[i][j];
		}
	}
	for(int i = 0; i < 12; i++)
	{
		conta += vet[x1][i];
	}
	if(op == 'S')
		cout << conta << endl;
	else
		cout << conta / 12 << endl;

	return 0;
}
