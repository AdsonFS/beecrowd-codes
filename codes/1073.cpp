#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int x; cin >> x;
	
	for(int y = 2; y <= x; y+=2)
	{
		cout << y << "^2 = " << (int)pow(y,2) << endl;
	}
	
	return 0;
}