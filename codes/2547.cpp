#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x, ok = 0;
	int x1, x2;
	while(cin >> n >> x1 >> x2)
	{
		ok = 0;
		int c = 0;
		while(cin >> x)
		{
			
			if(x >= x1 && x <= x2)
				ok++;
			if( c >= n-1)
				break;
			c++;
		}
		cout << ok << endl;
	}
	return 0;
}
