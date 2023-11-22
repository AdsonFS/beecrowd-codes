#include <iostream>
#include <iomanip>
#include <stdint.h>
#include <cmath>
using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(2);
	double A, B; cin >> A >> B;
	
	cout << ((B - A)/A) * 100 << "%" << endl;
	
	return 0;
}