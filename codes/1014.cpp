#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	cout << fixed << setprecision(1);
	
	int X;
	double Y;
	
	cin >> X; cin >> Y;
	
	cout << fixed << setprecision(3);
	double total = X/Y;
	cout << total << " km/l" << endl;
	
	
	
	
	return 0;
}