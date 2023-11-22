#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	long long int x, n, i;
	cin >> n;
	for(i = 0; i < n; i++)
	{
		cin >> x;
		if(2015 - x > 0)
			cout << 2015 - x << " D.C.\n";
		else
			cout << (x - 2015) + 1 << " A.C.\n";
	}
	return 0;
}
