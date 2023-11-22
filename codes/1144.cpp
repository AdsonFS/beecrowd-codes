#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int y; cin >> y;
	
	for(int x = 1; x <= y; x++)
	{
		cout << x << " " << (int)pow(x,2) << " " << (int)pow(x,3) << endl;
		cout << x << " " << (int)pow(x,2)+1 << " " << (int)pow(x,3)+1 << endl;
	}
	
	return 0;
}