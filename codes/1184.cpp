#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(1);
	int x1 = 0;
	double vet[12][12];
	char op;
	double soma = 0;
	cin >> op;
	
	for(int i = 0; i < 12; i++)
	{
		for(int j = 0; j < 12; j++)
		{
			cin >> vet[i][j];
			if(j < i)
			{
				soma += vet[i][j];
				x1++;
			}
		}
	}
	if(op == 'S')
		cout << soma << endl;
	else if (op == 'M')
		cout << soma/x1 << endl;
	
	return 0;
}