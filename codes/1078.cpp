#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int x; cin >> x;
	
	for(int y = 1; y <= 10; y++)
	{
		cout << y << " x " << x << " = " << y*x << endl;
	}
	
	return 0;
}