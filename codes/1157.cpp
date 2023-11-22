#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
using std::string;

int main ()
{
	//cout << fixed << setprecision(2);
	int x; cin >> x;
	
	for(int y = 1; y <= x; y++)
	{
		if(x%y == 0)
			cout << y << endl;
	}
	
	return 0;
}