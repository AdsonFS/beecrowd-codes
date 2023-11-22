#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x;
	
	while(cin >> n)
	{
		x = log(n)/log(2);
		cout << x << endl;
	}
	
	return 0;
}