#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	char d[10];
	cin >> d;
	cout << d[3] << d[4] << "/" << d[0] << d[1] << "/" << d[6] << d[7] << endl;
	cout << d[6] << d[7] << "/" << d[3] << d[4] << "/" << d[0] << d[1] << endl;
	cout << d[0] << d[1] << "-" << d[3] << d[4] << "-" << d[6] << d[7] << endl;
	
	return 0;
}