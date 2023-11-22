#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(4);
	
	int n, h, c, l;
	
	while(cin >> n >> h >> c >> l)
	{
	   	double x1 = sqrt(pow(c*n, 2) + pow(h*n, 2));
	   	x1 = x1 * l;
	   	cout << x1/10000 << endl;
	}
	
	return 0;
}