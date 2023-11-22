#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(2);
	
	int a, b, d, e;
	double c, f;
	
	cin >> a; cin >> b; cin >> c;
	cin >> d; cin >> e; cin >> f;
	
	cout << "VALOR A PAGAR: R$ " << (b*c) + (e*f) << endl;
	
	return 0;
}