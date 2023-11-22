#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(1);
	
	double A, B, C;
	
	cin >> A; cin >> B; cin >> C;
	
	cout << fixed << setprecision(3);
	cout << "TRIANGULO: " << A*C/2 << endl;
	cout << "CIRCULO: " << pow(C,2)*3.14159 << endl;
	cout << "TRAPEZIO: " << ((A+B)*C)/2 << endl;
	cout << "QUADRADO: " << pow(B,2) << endl;
	cout << "RETANGULO: " << A * B << endl;
	
	return 0;
}