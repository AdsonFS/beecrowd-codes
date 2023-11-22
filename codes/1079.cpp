#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(1);
	int c; cin >> c;
	
	for(int y = 0; y < c; y++)
	{
		double x1, x2, x3;
		cin >> x1 >> x2 >> x3;
		
		cout << (x1+x1+x2+x2+x2+(x3*5))/10.0 << endl;	
	}
	
	return 0;
}