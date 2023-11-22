#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int x, y, t; cin >> x >> y;
	t = 0;
	
	if ( x > y)
	{
		if(y%2 != 0)
		{
			while(true)
			{
				y += 2;
				if( y >= x) break;
				t += y;
			}
		}
		if(y%2 == 0)
		{
			y++;
			while(true)
			{
				t += y;
				y += 2;
				if( y >= x) break;
			}
		}
	}
	else if ( y > x)
	{
		if(x%2 != 0)
		{
			while(true)
			{
				x += 2;
				if( x >= y) break;
				t += x;
			}
		}
		if(x%2 == 0)
		{
			x++;
			while(true)
			{
				t += x;
				x += 2;
				if( x >= y) break;	
			}
		}
	}
	
	cout << t << endl;
	
	return 0;
}