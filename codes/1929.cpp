#include <iostream>
#include <cmath>
using namespace std;

bool ve(int a, int b, int c)
{
	if(fabs(b - c) < a && a < b + c)
	{
		if(fabs(a - c) < b && b < a + c)
			if(fabs(a - b) < c && c < a + b)
				return true;
	}
	return false;
}

int main(int argc, char *argv[])
{
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	bool ok1, ok2, ok3, ok4;
	ok1 = ve(a, b, c);
	ok2 = ve(a, b, d);
	ok3 = ve(a, c, d);
	ok4 = ve(d, b, c);
	
	if(ok1 || ok2 || ok3 || ok4)
		cout << "S\n";
	else
		cout << "N\n";
	
	return 0;
}