#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
using std::string;

int main ()
{
	cout << fixed << setprecision(2);
	double x1 = 0;
	int x2 = 1;
	for(int x = 1; x <= 39; x += 2)
	{
		x1 += (double)x/x2;
		x2 = x2*2;
	}
	cout << x1 << endl;
	
	return 0;
}