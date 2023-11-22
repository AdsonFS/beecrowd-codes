#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x1, x2 = 20;
	int p = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x1;
		if(x1 < x2)
		{
			x2 = x1;
			p = i+1;
		}
	}
	cout << p << endl;
	
	return 0;
}