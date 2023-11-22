#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	int x1, x2;
	double x;
	int caso = 1;
	while(cin >> x1 >> x2 && (x1+x2) != 0)
	{
		if(x2 >= x1)
			cout << "Case " << caso << ": 0\n";
		else  if(x1 <= (2 * x2))
			cout << "Case " << caso << ": 1\n";
		else if(x1 > (26 * x2) + x2)
			cout << "Case " << caso << ": impossible\n";
		else if(x2 == 1)
			cout << "Case " << caso << ": " << x1-1 << endl;
		else
		{
			x = (double)x1/x2;
			if(x == 26.0)
				x = 25;
			else if(x > 26)
				x = 26;
			int t = x;
			cout << "Case " << caso << ": " << t << endl;
		}
		
		caso++;
	}
	
	return 0;
}