#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(1);
	double A;
	double B;
	double C;
	
	cin >> A;
	cin >> B;
	cin >> C;
	
	double MEDIA = ( A*2 + B*3 + C*5) / 10;
	
	cout << "MEDIA = " << MEDIA << endl;
	
	return 0;
}