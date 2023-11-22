#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int x1, x2, xt; cin >> x1 >> x2;
	xt = 0;
	
	if(x1 < x2)
	{
		for(int y = x1; y <= x2; y++)
		{
			if(y%13 != 0) xt += y;
		}
	}
	else if(x1 > x2)
	{
		for(int y = x2; y <= x1; y++)
		{
			if(y%13 != 0) xt += y;
		}
	}
	
	cout << xt << endl;
	
	return 0;
}