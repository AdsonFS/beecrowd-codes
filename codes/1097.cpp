#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int i = 1; int j = 7;
	while(true)
	{
		cout << "I=" << i << " J=" << j << endl; j--;
		cout << "I=" << i << " J=" << j << endl;j--;
		cout << "I=" << i << " J=" << j << endl;
		i += 2;
		j += 4;
		
		if(i > 10) break;
	}
	
	return 0;
}