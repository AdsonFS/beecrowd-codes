#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	double a, b, c;
	cin >> a >> b >> c;
	
	cout << fixed << setprecision(1);
	if((double)abs(b - c) < a && a < (b+c))
	{
		if((double)(a - c) < b  && b < (a+c))
		{
			if((double)(a - b) < c && c < (a+b))
			{
			cout << "Perimetro = " << (a+b+c) << endl;
			}
		}
	}
	else
	{
		cout << "Area = " << ((a+b)*c)/2.0 << endl;
	}
	
	return 0;
}