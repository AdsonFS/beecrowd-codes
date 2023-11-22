#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x1;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x1;
		if(x1%2 == 0)
			cout << 0 << endl;
		else
			cout << 1 << endl;
	}
	return 0;
}
