#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(2);
	long double x1, x2;
	int i = 1;
	while(cin >> x1 >> x2)
	{
		cout << "Projeto " << i++ << ":\n";
		long double j = (double)(x2* 1.0/x1) * 100.0;
		j = j - 100.0;
		cout << "Percentual dos juros da aplicacao: " << j << " %\n\n";
	}
	
	return 0;
}