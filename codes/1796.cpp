#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x;
	int cont = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		if(x == 0)
			cont++;
	}
	if(cont > (n/2))
		cout << "Y\n";
	else
		cout << "N\n";
	
	return 0;
}