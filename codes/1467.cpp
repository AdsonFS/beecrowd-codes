#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int x1, x2, x3;
	
	while(cin >> x1 >> x2 >> x3)
	{
		if(x1 == 0 && x2 == 0 && x3 == 0)
			cout << "*\n";
		else if(x1 == 0 && x2 == 0 && x3 == 1)
			cout << "C\n";
		else if(x1 == 0 && x2 == 1 && x3 == 0)
			cout << "B\n";
		else if(x1 == 0 && x2 == 1 && x3 == 1)
			cout << "A\n";
		else if(x1 == 1 && x2 == 0 && x3 == 0)
			cout << "A\n";
		else if(x1 == 1 && x2 == 0 && x3 == 1)
			cout << "B\n";
		else if(x1 == 1 && x2 == 1 && x3 == 0)
			cout << "C\n";
		else if(x1 == 1 && x2 == 1 && x3 == 1)
			cout << "*\n";
	}
	
	return 0;
}