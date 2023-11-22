#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(2);
	double pi = 3.14;
	double x1, x2;
	
	while(cin >> x1 >> x2)
	{
		cout << "ALTURA = " << x1/ (pi * (x2/2.0)*(x2/2.0)) << endl;
		cout << "AREA = " << pi * (x2/2.0)*(x2/2.0) << endl;
	}
	
	return 0;
}