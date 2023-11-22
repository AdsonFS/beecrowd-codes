#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
using std::string;

int main ()
{
	int x; cin >> x;
	int x1 = 1;
	for(int y = x; y > 0; y--)
	{
		x1 = x1 * y;
	}
	cout << x1 << endl;
	
	
	
	return 0;
}