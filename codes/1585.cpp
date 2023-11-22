#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x1, x2;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x1 >> x2;
		cout << (int)(x1*x2)/2 << " cm2\n";
	}
	
	return 0;
}