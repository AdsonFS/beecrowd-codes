#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(2);
	int n, x1, x2;
	double soma = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x1 >> x2;
		if(x1 == 1001)
			soma += x2 * 1.5;
		else if(x1 == 1002)
			soma += x2 * 2.5;
		else if(x1 == 1003)
			soma += x2 * 3.5;
		else if(x1 == 1004)
			soma += x2 * 4.5;
		else if(x1 == 1005)
			soma += x2 * 5.5;
	}
	cout << soma << endl;
	
	return 0;
}
