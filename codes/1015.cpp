#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	double x1; double x2; double y1; double y2;
	
	cin >> x1; cin >> y1;
	cin >> x2; cin >> y2;
	
	double total = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
	
	cout << fixed << setprecision(4);
	cout << total << endl;
	
	
	return 0;
}