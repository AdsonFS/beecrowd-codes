#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int a, s, d, f, g, x;
	cin >> a >> s >> d >> f >> g;
	x = 0;
	
	if( a%2 == 0 )  x++; 
	if( s%2 == 0 )  x++; 
	if( d%2 == 0 )  x++; 
	if( f%2 == 0 )  x++; 
	if( g%2 == 0 )  x++;
	
	cout << x << " valores pares" << endl;
	
			
	return 0;
}