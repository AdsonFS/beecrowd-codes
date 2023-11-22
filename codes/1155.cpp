#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
using std::string;

int main ()
{
	cout << fixed << setprecision(2);
	double x1 = 0;
	for(int x = 1; x <= 100; x++)
	{
		x1 += (double)1/x;
	}
	cout << x1 << endl;
	
	return 0;
}