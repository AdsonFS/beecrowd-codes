#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(1);
	unsigned long long int x;
	cin >> x;
	long double x1 = (x/log(x));
	long double x2 = x/log(x) * 1.25506;
	cout << x1 << " " << x2 << endl;
	
	return 0;
}