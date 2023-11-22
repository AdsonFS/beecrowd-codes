#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	int x;
	long long int m;
	cin >> x >> m;
	do
	{
		cout << (long long int)m*x << endl;
		cin >> x >> m;
		
	}while(x != 0 && m != 0);
	
	
	return 0;
}