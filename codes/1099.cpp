#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int x, x1, x2; cin >> x;
	int total = 0;
	
	for(int y = 0; y < x; y++)
	{
		cin >> x1 >> x2;
		if(x1 < x2)
		{
			for(int t = x1+1; t < x2; t++)
			{
				if(t%2 != 0)
				{
					total += t;
				}
			}
			cout << total << endl;
		}
		else if(x1 > x2)
		{
			for(int t = x2+1; t < x1; t++)
			{
				if(t%2 != 0)
				{
					total += t;
				}
			}
			cout << total << endl;
		}
		else if(x1 == x2)
		{
			cout << "0" << endl;
		}
		total = 0;
	}
	
	
	
	return 0;
}