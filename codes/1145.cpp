#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int y1, y2; cin >> y1 >> y2;
	
	for(int x = 1; x <= y2; x++)
	{
		cout << x;
		if( x%y1 == 0)
		{
			cout << endl;
		}else
		{
			cout << " ";
		}
	}
	
	return 0;
}