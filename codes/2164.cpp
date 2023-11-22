#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(1);
	int n;
	cin >> n;
	double x = pow(((1 + sqrt(5))/2.0), n) - pow(((1 - sqrt(5))/2.0), n);
	x = x / sqrt(5);
	cout << x << endl;
	
	return 0;
}