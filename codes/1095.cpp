#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int j = 65;
	
	for(int i = 1; i <= 100; i += 3)
	{
		j -= 5;
		cout << "I=" << i << " J=" << j << endl;
		if(j == 0) break;
	}
	
	return 0;
}