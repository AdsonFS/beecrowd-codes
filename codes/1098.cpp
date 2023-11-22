#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	double i = 0; double j = 1;
	while(true)
	{
		cout << "I=" << i << " J=" << j << endl;
		cout << "I=" << i << " J=" << j+1 << endl;
		cout << "I=" << i << " J=" << j+2 << endl;
		i += 0.2; j += 0.2;
		
		if(i > 2.0) break;
	}
	
	return 0;
}