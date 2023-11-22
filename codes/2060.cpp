#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x, d = 0, t = 0, q = 0, c = 0;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		if(x%2 == 0)
			d++;
		if(x%3 == 0)
			t++;
		if(x%4 == 0)
			q++;
		if(x%5 == 0)
			c++;
	}
	cout << d << " Multiplo(s) de 2\n";
	cout << t << " Multiplo(s) de 3\n";
	cout << q << " Multiplo(s) de 4\n";
	cout << c << " Multiplo(s) de 5\n";
	
	return 0;
}