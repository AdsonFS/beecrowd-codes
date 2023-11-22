#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int d, x1, x2;
	while(cin >> d >> x1 >> x2)
	{
		double tem_lad = (double) (12.0 / x1);
		double tem_rot = (double) sqrt( pow(12.0, 2) + pow(d, 2)) / x2;
		
		if(tem_rot <= tem_lad)
			cout << "S\n";
		else
			cout << "N\n";
	}
	
	return 0;
}