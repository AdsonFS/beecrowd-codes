#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int n, t, l, x;
	int a = 0;
	int b = 0;
	cin >> n >> t >> l;
	int mesa = t;
	bool ali = true;
	bool bob = false;
	for(int i = 0; i < n-1; i++)
	{
		cin >> x;
		if(fabs(x - mesa) <= l && ali)
		{
			a += fabs(x - mesa);
			mesa = x;
		}
		if(fabs(x - mesa) <= l && bob)
		{
			b += fabs(x - mesa);
			mesa = x;
		}
		ali = !ali;
		bob = !bob;
	}
	cout << a << " " << b << endl;
	
	return 0;
}