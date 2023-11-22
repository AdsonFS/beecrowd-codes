#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(1);
	double x[100];
	
	for(int i = 0; i < 100; i++)
		cin >> x[i];
	
	for(int i = 0; i < 100; i++)
	{
		if(x[i] <= 10)
			cout << "A[" << i << "] = " << x[i] << endl;
	}
	
	
	return 0;
}