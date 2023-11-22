#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(1);
	double x1, x2;
	char nome[100];
	int i = 0;
	x2 = 0;
	while(!cin.getline(nome, 100).eof())
	{
		cin >> x1;
		x2 += x1;
		i++;
		cin.ignore();
	}
	cout << x2/i << endl;
	
	return 0;
}