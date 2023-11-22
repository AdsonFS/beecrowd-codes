#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char** argv)
{
	int i; cin >> i;
	
	int a = i/365; i = i - a*365;
	int m = i/30; i = i - m*30;
	int d = i;
	
	cout << a << " ano(s)" << endl;
	cout << m << " mes(es)" << endl;
	cout << d << " dia(s)" << endl;
	
	
	return 0;
}