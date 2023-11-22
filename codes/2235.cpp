#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int x1, x2, x3;
	cin >> x1 >> x2 >> x3;
	
	if(x1 == x2 || x1 == x3 || x2 == x3)
		cout << "S\n";
	else if(x1 == (x2+x3) || x2 == (x1+x3) || x3 == (x1+x2))
		cout << "S\n";
	else
		cout << "N\n";
	
	return 0;
}