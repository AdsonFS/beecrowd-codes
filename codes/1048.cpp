#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(2);
	double x, n, r; cin >> x; int p;
	
	if( x >= 0 && x <= 400 ) {n = x*1.15; r = x*0.15; p=15;} 
	else if( x > 400 && x <= 800 ) {n = x*1.12; r = x*0.12; p=12;}
	else if( x > 800 && x <= 1200 ) {n = x*1.10; r = x*0.10; p=10;}
	else if( x > 1200 && x <= 2000 ) {n = x*1.07; r = x*0.07; p=7;}
	else if( x > 2000 ) {n = x*1.04; r = x*0.04; p=4;}
	
	cout << "Novo salario: " << n << endl;
	cout << "Reajuste ganho: " << r << endl;
	cout << "Em percentual: " << p << " %" <<endl;
	
	return 0;
}