#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(2);
	
	double x, y; cin >> x;
	bool ok = true;
	if(x >= 0 && x <= 2000)
	{
		cout << "Isento" << endl;
		ok = false;
	}
	else if(x > 2000 && x <= 3000)
	{
		y = x - 2000;
		y = y * 0.08;
	}
	else if(x > 3000 && x <= 4500)
	{
		y = x - 3000;
		y = (y * 0.18) + 1000 * 0.08;
	}
	else if(x > 4500)
	{
		y = x - 4500;
		y = (y * 0.28) + 1000 * 0.08 + 1500 * 0.18;;
	}
	
	if(ok) cout << "R$ " << y << endl;
	
	return 0;
}