#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	int n, x1, x2;
	char op;
	cin >> n >> x1 >> op >> x2;
	
	switch(op)
	{
	case '+': 
		if(x1+x2 > n)
			cout << "OVERFLOW\n";
		else
			cout << "OK\n";
		break;
	default:
		if(x1*x2 > n)
			cout << "OVERFLOW\n";
		else
			cout << "OK\n";
		break;
	}
	
	return 0;
}
