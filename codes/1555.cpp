#include <iostream>
#include <cmath>
using namespace std;

int f1(int x1, int x2)
{
	return pow(3 * x1, 2) + pow(x2 ,2);
}

int f2(int x1, int x2)
{
	return (2 * pow(x1, 2)) + pow(5 * x2, 2);
}

int f3(int x1, int x2)
{
	return -(100 * x1) + pow(x2, 3);
}

int main(int argc, char *argv[])
{
	int n, x1, x2;
	cin >> n;
	for(int k = 0; k < n; k++)
	{
		cin >> x1 >> x2;
		if(f1(x1, x2) > f2(x1, x2) && f1(x1,x2) > f3(x1, x2))
			cout << "Rafael ganhou\n";
		else if(f2(x1, x2) > f1(x1, x2) && f2(x1,x2) > f3(x1, x2))
			cout << "Beto ganhou\n";
		else if(f3(x1, x2) > f1(x1, x2) && f3(x1,x2) > f2(x1, x2))
			cout << "Carlos ganhou\n";
	}
	
	return 0;
}