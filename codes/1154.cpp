#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
using std::string;

int main ()
{
	cout << fixed << setprecision(2);
	int x = 0;
	int x1 = 0;
	while(true)
	{
		int y; cin >> y;
		if(y<0)
			break;
		else
		{
			x += y;
			x1++;
		}
	}
	cout << (double)x/x1 << endl;
	return 0;
}