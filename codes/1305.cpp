#include <iostream>
#include <cstring>
using namespace std;


int main(int argc, char *argv[])
{
	double x1, x2;
	
	while(cin >> x1 >> x2)
	{
		int x = x1;
		double dec = x1-x;
		if(dec >= x2)
			cout << x+1 << endl;
		else
			cout << x << endl;
	}

	return 0;
}
