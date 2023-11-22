#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(2);
	int x;
	
	while(cin >> x)
	{
		cout << ((((pow(x, 2) * sqrt(3))) / 4.0) * 8) / 5.0 << endl;
	}
	
	return 0;
}