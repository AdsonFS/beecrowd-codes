#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(1);
	double A;
	double B;
	
	cin >> A;
	cin >> B;
	
	cout << fixed << setprecision(5);
	double MEDIA = ((A * 3.5) + (B * 7.5)) / 11;
	
	cout << "MEDIA = " << MEDIA << endl;
	
	return 0;
}