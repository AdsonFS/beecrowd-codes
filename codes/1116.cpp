#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(1);
	int x, x1, x2; cin >> x;
	
	for(int y = 0; y < x; y++)
	{
		cin >> x1 >> x2;
		if(x2 == 0)
		{
			cout << "divisao impossivel" << endl;
		}else
		{
			cout << (double)x1/x2 << endl;
		}
	}
	
	return 0;
}