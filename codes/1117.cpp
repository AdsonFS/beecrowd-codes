#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	double x1, x2;
	x2 = 0;
	int y = 0;
	
	cout << fixed << setprecision(2);
	
	while(cin >> x1)
	{
		if(x1 < 0 || x1 > 10)
		{
			cout << "nota invalida" << endl;
		}
		else
		{
			y++;
			x2 += x1;
			if(y == 2)
			{
				cout << "media = " << (double)x2/2 << endl;
				break;
			}
		}
	}
	
	return 0;
}