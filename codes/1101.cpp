#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int x1, x2, t;
	t = 0;
	
	while(cin >> x1 >> x2)
	{
		if(x1 <= 0 || x2 <= 0) break;
		if(x1 < x2) 
		{
			for(int x = x1; x <= x2; x++)
			{
				cout << x << " ";
				t += x;
				if(x == x2)
				{
					cout << "Sum=" << t << endl;
					t = 0;
				}
			}
		}
		else if(x1 > x2) 
		{
			for(int x = x2; x <= x1; x++)
			{
				cout << x << " ";
				t += x;
				if(x == x1)
				{
					cout << "Sum=" << t << endl;
					t = 0;
				}
			}
		}
	}
	
	return 0;
}