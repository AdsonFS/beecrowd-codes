#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x1, x2, p;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x1 >> x2 >> p;
		if(x1 < 10)
			cout << "0" << x1 << ":";
		else
			cout << x1 << ":";
		if(x2 < 10)
			cout << "0" << x2;
		else
			cout << x2;
		
		if(p == 1)
			cout << " - A porta abriu!\n";
		else
			cout << " - A porta fechou!\n";
		
	}
	
	return 0;
}