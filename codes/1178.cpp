#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(4);
	
	double x[100];
	cin >> x[0];
	cout << "N[0] = " << x[0] << endl;
	
	for(int i = 1; i < 100; i++)
	{
		x[i] = x[i-1]/2.0;
		cout << "N[" << i << "] = " << x[i] << endl;
	}
	
	return 0;
}