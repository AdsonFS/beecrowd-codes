#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	double a, s, d, f, g, h;
	cin >> a >> s >> d >> f >> g >> h;
	int x = 0;
	if(a > 0){x++;}
	if(s > 0){x++;}
	if(d > 0){x++;}
	if(f > 0){x++;}
	if(g > 0){x++;}
	if(h > 0){x++;}
	
	cout << x << " valores positivos" << endl;
	return 0;
}
