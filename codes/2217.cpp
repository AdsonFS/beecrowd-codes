#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char *argv[])
{
	unsigned long long int x;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		if(x%2 == 0)
			cout << "1\n";
		else
			cout << "9\n";
	}
	
	return 0;
}