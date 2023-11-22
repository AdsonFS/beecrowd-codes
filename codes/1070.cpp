#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int x; cin >> x;
	if( x%2 == 0) {x++;}
	
	for(int y = 0; y < 6; y++)
	{
		cout << x << endl;
		x += 2;
	}
			
	return 0;
}