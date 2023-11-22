#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int x1, x2; cin >> x1 >> x2;
	if(x1 >= 0 && x2 >= 0)
	{
		if(x1 < x2)
		{
			for(int x = x1+1; x < x2; x++)
			{
				if(x%5 == 2 || x%5 == 3) cout << x << endl;
			}
		}
		else if(x2 < x1)
		{
			for(int x = x2+1; x < x1; x++)
			{
				if(x%5 == 2 || x%5 == 3) cout << x << endl;
			}
		}
	}
	return 0;
}