#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(2);
	int x1, x2;
	cin >> x1 >> x2;
	cout << (double)x1/x2 << endl;
	
	return 0;
}