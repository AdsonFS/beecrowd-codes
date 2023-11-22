#include <iostream>
#include <math.h>
#include <iomanip>
#include <string>

using namespace std;

int main(int argc, char** argv)
{
	cout << fixed << setprecision(2);
	string nome;
	double x;
	double y;
	
	cin >> nome;
	cin >>  x;
	cin >> y;
	
	double ganho = x + y*0.15;
	
	cout << "TOTAL = R$ " << ganho << endl;
	
	return 0;
}