#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int x; cin >> x;
	
	for(int y = 2; y < 10000; y++)
	{
		if(y%x == 2) cout << y << endl;
	}
	
	return 0;
}