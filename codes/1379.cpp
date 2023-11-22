#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	long long int x1, x2, x3;
	
	while(cin >> x1 >> x2 && (x1+x2) != 0)
	{
		if(x1 == x2)
			x3 = x1;
		else if(x1 > x2)
			x3 = x2 - (x1 - x2);
		else
			x3 = x1 - (x2 - x1);
		
		cout << x3 << endl;
	}
	
	return 0;
}