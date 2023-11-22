#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main ()
{
	//cout << fixed << setprecision(2);	
	long long int x; cin >> x;
	long long int x1 = 0;
	long long int x2 = 1;
	long long int fim;
	cout << 0;
	for(int y = 1; y < x; y++)
	{
		if(y == 1)
		{
			cout << " " << y;
		}
		else
		{
			fim = x1+x2;
			x1 = x2;
			x2 = fim;
			cout << " " << fim;
		}
	}
	cout << endl;
	return 0;
}