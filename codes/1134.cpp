#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int x1, a, g, d;
	a = 0; g = 0; d = 0;
	
	while(true)
	{
		cin >> x1;
		if(x1 == 1) a++;
		if(x1 == 2) g++;
		if(x1 == 3) d++;
		if(x1 == 4) break;
	}
	
	cout << "MUITO OBRIGADO" << endl;
	cout << "Alcool: " << a << endl;
	cout << "Gasolina: " << g << endl;
	cout << "Diesel: " << d << endl;
	
	return 0;
}