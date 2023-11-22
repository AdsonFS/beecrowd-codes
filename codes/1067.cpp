#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
	int x; cin >> x;
	int y = 1;
	
	while(true)
	{
		cout << y << endl;
		y += 2;
		
		if(y > x){break;}
	}
	
	
	
	return 0;
}
