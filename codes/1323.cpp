#include <iostream>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	
	while(cin >> n && n != 0)
	{
		int x = 0;
		for(int i = 1; i <= n; i++)
		{
			x = pow(i-1, 2) + x;
		}
		cout << pow(n, 2) + x << endl;
	}
	
	return 0;
}