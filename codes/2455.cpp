#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	
	int x1 = a*b;
	int x2 = c*d;
	
	if(x1 == x2)
	{
		cout << 0 << endl;
	}
	
	if(x1 < x2)
	{
		cout << 1 << endl;
	}
	
	if(x1 > x2)
	{
		cout << -1 << endl;
	}
	
	return 0;
}