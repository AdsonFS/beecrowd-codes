#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(2);
	int x1, t;
	double x2, x3;
	
	while(cin >> t && t != 0)
	{
		int size = 1;
		for(int i = 0; i < t; i++)
		{
			cin >> x1 >> x2 >> x3;
			cout << "Size #" << size++ << ":\nIce Cream Used: ";
			cout << (((x2+x3)*5)/2.0) * x1 << " cm2\n";
		}
		cout << endl;
	}
	
	return 0;
}