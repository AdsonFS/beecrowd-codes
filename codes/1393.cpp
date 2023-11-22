#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	int x[41];
	x[1] = 1;
	x[2] = 2;
	
	for(int i = 3; i < 41; i++)
		x[i] = x[i-1] + x[i-2];
	
	while(cin >> n && n != 0)
		cout << x[n] << endl;
	
	return 0;
}