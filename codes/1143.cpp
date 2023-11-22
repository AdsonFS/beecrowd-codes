#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int y; cin >> y;
	
	for(int x = 1; x <= y; x++)
	{
		cout << x << " " << pow(x,2) << " " << pow(x,3) << endl;
	}
	
	return 0;
}