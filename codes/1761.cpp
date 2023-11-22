#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

#define PI 3.141592654

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(2);
	double x1, x2, x3;
	
	while(cin >> x1 >> x2 >> x3)
	{
		double tam = 5 * ((tan(x1*PI/180) * x2) + x3);
		cout << tam << endl;
	}
	
	return 0;
}