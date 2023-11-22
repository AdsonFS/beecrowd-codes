#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int y, x1; cin >> y;
	x1= 0;
	for(int x = 1; x <= y*4; x++)
	{
		if(x%4 == 0)
		{
			cout << "PUM" << endl;
		}
		else
		{
			cout << x << " ";
		}
	}
	
	return 0;
}