#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, d;
	double com;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> com;
		d = 0;
		while(com > 1)
		{
			com /= 2;
			d++;
		}
		cout << d << " dias\n";
	}
	return 0;
}
