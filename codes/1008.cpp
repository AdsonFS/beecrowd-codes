#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(2);
	int A;
	int B;
	double C;
	
	cin >> A;
	cin >> B;
	cin >> C;
	
	double ganho = B*C;
	
	cout << "NUMBER = " << A << endl;
	cout << "SALARY = U$ " << ganho << endl;
	
	return 0;
}