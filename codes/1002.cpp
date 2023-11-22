#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(2);
	
	double raio;
	cin >> raio;
	
	cout << fixed << setprecision(4);
	double A = pow(raio,2) * 3.14159;
	
	cout << "A=" << A << endl;
	
	return 0;
}