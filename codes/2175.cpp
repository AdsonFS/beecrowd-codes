#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	cout << fixed << setprecision(3);
	double a, b, c;
	cin >> a >> b >> c;
	if(a < b && a < c)
		cout << "Otavio\n";
	else if(b < a && b < c)
		cout << "Bruno\n";
	else if(c < b && c < a)
		cout << "Ian\n";
	else
		cout << "Empate\n";
	return 0;
}