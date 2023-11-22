#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main()
{
	cout << fixed << setprecision(5);  
		
	double A; cin >> A;
	double B; cin >> B;
	double C; cin >> C;
	
	if(A == 0 || (pow(B,2) - 4*A*C) < 0)
	{
		cout << "Impossivel calcular" << endl;
	}else{
		
		double x1 = (-B + sqrt(pow(B,2) - (4*A*C))) / (2*A);
		double x2 = (-B - sqrt(pow(B,2) - (4*A*C))) / (2*A);
		
		cout << "R1 = " << x1 << endl;
		cout << "R2 = " << x2 << endl;
	}
	return 0;
}