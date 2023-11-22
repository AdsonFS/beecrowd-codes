#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		if(i == n-1)
			cout << "Ho!";
		else
			cout << "Ho ";
	}
	cout << endl;
	
	return 0;
}