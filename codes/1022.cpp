#include <iostream>
#include <cmath>
using namespace std;

int mdc(int n, int d)
{
	if(n < 0)
		n = n * (-1);
	if(d < 0)
		d = d * (-1);
	for(int i = n; i >= 2; i--)
	{
		if(n%i == 0 && d%i == 0)
			return i;
	}
	
	return 1;
}

int main(int argc, char *argv[])
{
	int n1, n2, d1, d2, n, d, m;
	int p;
	char op, div;
	cin >> p;
	for(int i = 0; i < p; i++)
	{
		cin >> n1 >> div >> d1 >> op >> n2 >> div >> d2;
		switch(op)
		{
		case '+':
			n = (n1*d2) + (n2*d1);
			d =	(d1*d2);
			m = mdc(n, d);
			break;
		case '-':
			n = (n1*d2) - (n2*d1);
			d =	(d1*d2);
			m = mdc(n, d);
			break;
		case '*':
			n = (n1*n2);
			d =	(d1*d2);
			m = mdc(n, d);
			break;
		case '/':
			n = (n1*d2);
			d =	(n2*d1);
			m = mdc(n, d);
			break;
		}
		cout << n << "/" << d << " = " << n/m << "/" << d/m << endl;
	}
	
	return 0;
}