#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int i = 1;
	while(true)
	{
		cout << "I=" << i << " J=7" << endl;
		cout << "I=" << i << " J=6" << endl;
		cout << "I=" << i << " J=5" << endl;
		i += 2;
		if(i > 10) break;
	}
	
	return 0;
}