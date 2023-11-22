#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	
	int hora = x1 + x2 + x3;
	
	if(hora < 0)
		hora += 24;
	else if(hora >= 24)
		hora -= 24;
	cout << hora << endl;
	
	return 0;
}
