#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, b;
	int x1, x2, x3;
	int z1, z2, z3;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> b;
		cin >> x1 >> x2 >> x3;
		cin >> z1 >> z2 >> z3;
		double c1, c2;
		c1 = (x1+x2)/2.0;
		c2 = (z1+z2)/2.0;
		
		if(x3%2 == 0)
			c1 += b;
		if(z3%2 == 0)
			c2 += b;
		
		if(c1 > c2)
			cout << "Dabriel\n";
		else if(c1 < c2)
			cout << "Guarte\n";
		else
			cout << "Empate\n";
	}
	
	return 0;
}