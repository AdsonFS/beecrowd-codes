#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main ()
{
	//cout << fixed << setprecision(2);	
	
	int x;
	while(cin >> x)
	{
		if(x == 0)
			break;
		
		for(int y = 1; y <= x; y++)
		{
			if(y == 1)
				cout << y;
			else 
				cout << " " << y; 
		}
		cout << endl;
	}
	
	return 0;
}