#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int n, x, in, out; cin >> n;
	in = 0; out = 0;
	for(int y = 0; y < n; y++)
	{
		cin >> x;
		if(x >= 10 && x <= 20)
		{
			in++;
		}else
		{
			out++;
		}
	}
	
	cout << in << " in" << endl;
	cout << out << " out" << endl;
	
	return 0;
}