#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main(int argc, char** argv)
{
	int x, y;
	
	while(cin >> x >> y)
	{
		if(x == y) break;
		
		if(x < y) cout << "Crescente" << endl;
		if(x > y) cout << "Decrescente" << endl;
	}
	
	return 0;
}