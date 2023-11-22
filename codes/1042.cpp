#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int a, b, c; cin >> a >> b >> c;
	
	if(a < b && b < c) {cout << a << endl << b << endl << c << endl << endl;}
	if(a < b && c < b && a < c) {cout << a << endl << c << endl << b << endl << endl;}
	if(b < a && a < c) {cout << b << endl << a << endl << c << endl << endl;}
	if(b < a && c < a && b < c) {cout << b << endl << c << endl << a << endl << endl;}
	if(c < a && a < b) {cout << c << endl << a << endl << b << endl << endl;}
	if(c < a && b < a && c < b) {cout << c << endl << b << endl << a << endl << endl;}
	
		
	cout << a << endl << b << endl << c << endl;

	return 0;
}