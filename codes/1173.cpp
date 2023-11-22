#include <iostream>
using namespace std;

int main(int argc, char** argv)
{
	int x[10];
	
	cin >> x[0];
	cout << "N[0] = " << x[0] << endl;
	
	for(int i = 1; i < 10; i++)
	{
		x[i] = x[i - 1] * 2;
		cout << "N[" << i << "] = " << x[i] << endl;
	}
	
	return 0;
}