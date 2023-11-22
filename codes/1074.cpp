#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int n; cin >> n;
	long long int x;
	for(int y = 0; y < n; y++)
	{
		cin >> x;
		if( x%2 == 0 && x > 0) cout << "EVEN POSITIVE" << endl;
		if( x%2 == 0 && x < 0) cout << "EVEN NEGATIVE" << endl;
		if( x%2 != 0 && x < 0) cout << "ODD NEGATIVE" << endl;
		if( x%2 != 0 && x > 0) cout << "ODD POSITIVE" << endl;
		if( x == 0) cout << "NULL" << endl;
	}
	
	return 0;
}