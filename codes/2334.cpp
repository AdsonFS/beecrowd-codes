#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	unsigned long long int p;
	
	while(cin >> p && p != -1)
	{
		if(p == 0)
			cout << "0\n";
		else
			cout << p-1 << endl;
	}
	
	return 0;
}